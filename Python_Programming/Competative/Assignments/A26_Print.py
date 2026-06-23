# Write a program which accept a number from user and if number is less than 50 print small,
# if it is greater then 50 and less than 100 print medium, if greater than 100 print large.

#################################################################
#
#  Function name :  Print
#  Input         :  int
#  Output        :  void
#  Description   :  To print <50 small, >50 & <100 medium, >100 large
#  Date          :  23/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Print(
            iNo              # Parameter to take input
         ):
    
    if(iNo < 50):
        print("Small")
    elif(iNo > 50 and iNo < 100):
        print("Medium")
    elif(iNo > 100):
        print("Large")
    else:
        print("Invalid number")

#################################################################
#
# Application to display 
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
#  Input  :    75
#  Output :    Medium
#  
#  Input  :    1
#  Output :    Small
#               
#################################################################