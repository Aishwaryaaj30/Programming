# Write a program which accepts one number from user and
# display its multiplication of factors

"""
Algorithm
    START
        Accept number as iNo
        Display Multiplication of factors
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  MultFact
#  Input         :  int
#  Output        :  void
#  Description   :  Display Multiplication of Factors
#  Date          :  16/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def MultFact(
                iNo             # Variable to accept input
            ):
    # Updator
    if(iNo <= 0):
        iNo = -iNo

    iMult = 1

    for i in range(1,(iNo // 2) + 1):
        if((iNo % i) == 0):
            iMult = iMult * i
        
    return iMult

#################################################################
#
# Application to print even factors on screen
#
#################################################################

def Main():
    iValue = int(input("Enter number : "))  # Variable to store input

    iRet = MultFact(iValue)                 # Function call

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
#  Output :    144
# 
#  Input  :    13
#  Output :    1              
#################################################################