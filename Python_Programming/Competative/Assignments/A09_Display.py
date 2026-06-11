# Accept two number from user and display first number in second number of times.

"""
Algorithm
    START
        Accept first number as iNo1
        Accept first number as iNo2
        Print first number in second number frequency
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  Display
#  Input         :  int
#  Output        :  -
#  Description   :  Checks if no less than 10 print "Hello" else "Demo"
#  Date          :  11/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Display(
                iNo,             # Variable to take first input
                iFreq           # Variable to take second input
           ): 
    # Updator
    if(iFreq < 0):
        iFreq = -iFreq

    for i in range(iFreq):
        print(iNo)

#################################################################
#
# Application to check if number is less than 10 print "Hello" otherwise print "Demo".
#
#################################################################

def Main():
    
    iValue1 = int(input("Enter Number : "))
    iValue2 = int(input("Enter Frequency : "))

    iRet = Display(iValue1, iValue2)             # Function Call

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
#  Input  :    12   5
#  Output :    12 12 12 12 12
#         
#  Input  :    2    -3
#  Output :    2 2 2
#     
################################################################# 