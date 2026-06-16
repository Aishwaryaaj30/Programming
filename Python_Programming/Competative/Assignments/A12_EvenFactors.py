# Write a program which accepts one number from user and print
# even factors of that number on screen

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
#  Function name :  DisplayFactors
#  Input         :  int
#  Output        :  void
#  Description   :  Print Even Factors
#  Date          :  16/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def DisplayFactors(
                        iNo             # Variable to accept input
                  ):
    # Updator
    if(iNo <= 0):
        iNo = -iNo

    for i in range(1,(iNo // 2) + 1):
        if((iNo % i == 0) and i % 2 == 0):
            print(i)
        
#################################################################
#
# Application to print even factors on screen
#
#################################################################

def Main():
    iValue = int(input("Enter number : "))  # Variable to store input

    DisplayFactors(iValue)              # Function call

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
#  Input  :    24
#  Output :    2 4 6 8 12
#               
#################################################################