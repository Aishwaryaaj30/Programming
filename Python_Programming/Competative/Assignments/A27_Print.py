# Accept single digit number from user and print it into word

#################################################################
#
#  Function name :  Print
#  Input         :  int
#  Output        :  void
#  Description   :  To print digit in word
#  Date          :  23/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Print(
            iNo              # Parameter to take input
         ):
    
    # Filter
    if(iNo < 0):
        iNo = -iNo

    if(iNo == 1):
        print("One")
    elif(iNo == 2):
        print("Two")
    elif(iNo == 3):
        print("Three")
    elif(iNo == 4):
        print("Four")
    elif(iNo == 5):
        print("Five")
    elif(iNo == 6):
        print("Six")
    elif(iNo == 7):
        print("Seven")
    elif(iNo == 8):
        print("Eight")
    elif(iNo == 9):
        print("Nine")
    else:
        print("Invalid number")

#################################################################
#
# Application to display digit in word
#
#################################################################

def Main():
    iValue = 0              # Variable to store input

    iValue = int(input("Enter number : "))

    Print(iValue)           # Function call

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
#  Output :    Nine
#  
#  Input  :    -3
#  Output :    Three
# 
#  Input  :    12
#  Output :    Invalid number
#                
#################################################################