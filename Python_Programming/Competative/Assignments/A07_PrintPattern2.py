# Accept a number from user and print that number of * on screen

"""
Algorithm
    START
        Accept number as iNo
        Performs Iteration to print * 
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  Display
#  Input         :  int
#  Output        :  *
#  Description   :  Performs iteartion to print *
#  Date          :  11/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Accept(
            iNo             # Variable to take input
          ):
    iCnt = 0
    
    if(iNo < 0):
        iNo = -iNo

    while(iNo > iCnt):
        print("*")
        iNo = iNo - 1

#################################################################
#
# Application to perform iteration to print that number of * on screen
#
#################################################################

def Main():
    iValue = int(input("Enter number : "))

    iRet = Accept(iValue)           # Function Call

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
#  Output :    * * * * *
#              
#################################################################