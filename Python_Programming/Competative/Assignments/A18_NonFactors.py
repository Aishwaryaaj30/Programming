# Write a program which accepts one number from user and
# display all its non factors

"""
Algorithm
    START
        Accept number as iNo
        Display all non factors
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  NonFact
#  Input         :  int
#  Output        :  void
#  Description   :  Display all non factors
#  Date          :  16/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def NonFact(
                iNo             # Variable to accept input
           ):
    # Updator
    if(iNo <= 0):
        iNo = -iNo

    for i in range(1, iNo + 1):
        if((iNo % i) != 0):
            print(i)
        
#################################################################
#
# Application to print even factors on screen
#
#################################################################

def Main():
    iValue = int(input("Enter number : "))  # Variable to store input

    NonFact(iValue)                         # Function call

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
#  Output :    5 7 8 9 10 11
#               
#################################################################