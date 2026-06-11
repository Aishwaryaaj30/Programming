# Accept number from user and check whether number is even and odd.

"""
Algorithm
    START
        Accept number as iNo
        check :
            If iNo is divisible by 2
                Return true
            Otherwise 
                Return False
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  Check
#  Input         :  int
#  Output        :  Boolean
#  Description   :  Check number is Even or Odd
#  Date          :  11/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Check(
            iNo             # Variable to take input
         ):
    if(iNo % 2 == 0):
        return True
    else:
        return False

#################################################################
#
# Application to check whether number is Even or Odd
#
#################################################################

def Main():
    
    iValue = int(input("Enter Number : "))

    iRet = Check(iValue)            # Function Call

    if(iRet == True):
        print("Number is Even")
    else:
        print("Number is Odd")

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
#  Input  :    5
#  Output :    Number is Odd
# 
#  Input  :    2
#  Output :    Number is Even
#              
#################################################################