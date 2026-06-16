# Write a program which accepts one number from user and
# return summation all its non factors

"""
Algorithm
    START
        Accept number as iNo
        Display all non factors
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  NonFact
#  Input         :  int
#  Output        :  void
#  Description   :  Perform summation all non factors
#  Date          :  16/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def SumNonFact(
                    iNo             # Variable to accept input
              ):
    # Updator
    if(iNo <= 0):
        iNo = -iNo

    iSum = 0                        # Variable to store sum of factors

    for i in range(1, iNo + 1):
        if((iNo % i) != 0):
            iSum = iSum + i
        
    return iSum
        
#################################################################
#
# Application to print even factors on screen
#
#################################################################

def Main():
    iValue = int(input("Enter number : "))  # Variable to store input

    iRet = SumNonFact(iValue)               # Function call

    print(iRet)

    return 0

#################################################################
#
# Program execution starts from here.
#
#################################################################

if __name__ == "__main__":
    Main()

#################################################################
#
#  Input  :    12
#  Output :    50
#   
#  Input  :    10
#  Output :    37            
#################################################################