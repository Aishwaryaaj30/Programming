# Program to divide two numbers

"""
Algorithm
    START
        Accept first number as No1
        Accept second number as No2
        Perform Division of No1 and No2
        Display the result
    STOP
"""

#################################################################
#
#  Function name : Divide
#  Input :         int, int
#  Output :        int
#  Description :   Performs division of two int
#  Date :          11/06/2026
#  Author :        Aishwarya Mohan Jadhav
#
#################################################################

def Divide(
                iNo1,           # Variable to take first input
                iNo2            # Variable to take second input 
          ):
    if iNo2 < 0:
        return -1
    
    iAns = iNo1 / iNo2

    return iAns

#################################################################
#
# Application to perform division of two int values
#
#################################################################
def Main():
    iValue1 = 15
    iValue2 = 5

    iRet = Divide(iValue1, iValue2)         # Function Call

    print("Division is : ", iRet)

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
# Input :     15      5
# Output :    3.0
#
#################################################################