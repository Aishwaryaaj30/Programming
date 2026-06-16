# Write a program which accepts one number from user and
# return difference between summation all its factors and non factors

"""
Algorithm
    START
        Accept number as iNo
        Display difference
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  Difference
#  Input         :  int
#  Output        :  void
#  Description   :  Perform diff btw summation all factors & non factors
#  Date          :  16/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Difference(
                    iNo             # Variable to accept input
              ):
    # Updator
    if(iNo <= 0):
        iNo = -iNo

    iSumFact = 0                    # Variable to store sum of factors
    iSumNon = 0                     # Variable to store sum of non factors
    iDiff = 0                       # Variable to store difference fact, Non fact

    for i in range(1, (iNo // 2) + 1):
        if((iNo % i) == 0):
            iSumFact = iSumFact + i

    for i in range(1, iNo + 1):
        if((iNo % i) != 0):
            iSumNon = iSumNon + i
    
    iDiff = iSumFact - iSumNon
    return iDiff
        
#################################################################
#
# Application to print even factors on screen
#
#################################################################

def Main():
    iValue = int(input("Enter number : "))  # Variable to store input

    iRet = Difference(iValue)               # Function call

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
#  Input  :    12   (16 - 50)
#  Output :    -34
#   
#  Input  :    10   (8 - 37)
#  Output :    -29            
#################################################################