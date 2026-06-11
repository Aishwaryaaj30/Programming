# Accept a number from user, if number is less than 10 print "Hello" otherwise print "Demo".

"""
Algorithm
    START
        Accept number as iNo
        check:
            If iNo is less than 10
                Print Hello
            Otherwise 
                Print Demo
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
                iNo             # Variable to take input
           ):
    if(iNo < 10):
        print("Hello")
    else:
        print("Demo")

#################################################################
#
# Application to check if number is less than 10 print "Hello" otherwise print "Demo".
#
#################################################################

def Main():
    
    iValue = int(input("Enter Number : "))

    Display(iValue)             # Function Call

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
#  Input  :    9
#  Output :    Hello
#         
#  Input  :    12
#  Output :    Demo
#     
#################################################################