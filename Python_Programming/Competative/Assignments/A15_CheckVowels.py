# Accepts one character from user and convert case of that character

"""
Algorithm
    START
        Accept character as cValue
        check :
            If cValue is a,e,i,o,u,A,E,I,O,U
                Display It is a vowel on screen
            Otherwise
                Display It is not a vowel on screen
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  CheckVowel
#  Input         :  int
#  Output        :  void
#  Description   :  Convert case
#  Date          :  16/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def CheckVowel(
                    ch          # Variable to accept input
              ):
    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or
       ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U'):
        return True
    
    else:
        return False
    
#################################################################
#
# Application to convert case of the character
#
#################################################################

def Main():
    cValue = input("Enter character : ")    # Variable to store input

    iRet = CheckVowel(cValue)           # Function Call

    if(iRet == True):
        print("Its a Vowel\n")
    else:
        print("Its not a Vowel\n")

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
#  Input  :    a
#  Output :    Its a vowel
#   
#  Input  :    D
#  Output :    Its not a vowel
#             
#################################################################