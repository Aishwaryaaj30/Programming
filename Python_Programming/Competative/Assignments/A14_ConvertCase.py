# Accepts one character from user and convert case of that character

"""
Algorithm
    START
        Accept character as cValue
        check :
            If cValue is lowercase
                convert to uppercase
            If cValue is uppercase
                convert to lowercase
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  DisplayConvert
#  Input         :  int
#  Output        :  void
#  Description   :  Convert case
#  Date          :  16/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def DisplayConvert(
                    cValue          # Variable to accept input
                  ):
    if(cValue >= 'a' and cValue <= 'z'):
        print(cValue.upper())
    elif(cValue >= 'A' and cValue <= 'Z'):
        print(cValue.lower())
    
#################################################################
#
# Application to convert case of the character
#
#################################################################

def Main():
    cValue = input("Enter character : ")    # Variable to store input

    DisplayConvert(cValue)          # Function call

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
#  Input  :    A
#  Output :    a
#   
#  Input  :    d
#  Output :    D
#             
#################################################################