# Accept one number and check whether it is divisible by 5 or not

"""
Algorithm
    START
        Accept number as iNo
        check Divisibility:
            If iNo is divisible by 5
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
#  Description   :  Performs divisibility of number by 5
#  Date          :  11/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Check(
            iNo             # Variable to take input
         ):
    if(iNo % 5 == 0):
        return True
    else:
        return False

#################################################################
#
# Application to check whether it is divisible by 5 or not
#
#################################################################

def Main():
    
    iValue = int(input("Enter Number : "))

    iRet = Check(iValue)            # Function Call

    if(iRet == True):
        print("Divisible by 5")
    else:
        print("Not Divisible by 5")

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
#  Input  :    10
#  Output :    Divisible by 5
#              
#################################################################