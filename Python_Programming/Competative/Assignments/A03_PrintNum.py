# Program to print 5 to 1 numbers on screen

"""
Algorithm
    START
        Performs Iteration to print 5 to 1 numbers
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  Display
#  Input         :  -
#  Output        :  -
#  Description   :  Performs iteration to print 5 to 1
#  Date          :  11/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Display():
    for i in range(5, 0, -1):       # For reverse STEP is compulsory
        print(i)

#################################################################
#
# Application to perform iteration to print 5 to 1
#
#################################################################

def Main():
    Display()

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
#  Input :     -
#  Output :    5    4   3   2   1
#              
#################################################################