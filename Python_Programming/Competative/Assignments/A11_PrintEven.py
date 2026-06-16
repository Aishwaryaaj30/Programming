# Write a program which accepts one number from user and print
# that number of even numbers on screen

"""
Algorithm
    START
        Accept number as iNo
        check :
            If number is even
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  PrintEven
#  Input         :  int
#  Output        :  void
#  Description   :  Print Even number
#  Date          :  16/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def PrintEven(
                iNo         # Variable to accept input
             ):
    if(iNo < 0):
        return
    
    iCount = 1              # Variable to print even numbers 
    iEvencnt = 0            # Variable to store count of even numbers

    while(iEvencnt < iNo):
        if((iCount % 2) == 0):
            print(iCount)
            iEvencnt = iEvencnt + 1
        iCount = iCount + 1

#################################################################
#
# Application to print even number on screen
#
#################################################################

def Main():
    iValue = int(input("Enter number : "))  # Variable to store input

    PrintEven(iValue)           # Function Call

#################################################################
#
# Program execution starts from here.
#
#################################################################

if __name__ == "__main__":
    Main()

#################################################################
#
#  Input  :    7
#  Output :    2 4 6 8 10 12 14
#               
#################################################################