# Write a program to find factorial of given number

#################################################################
#
#  Function name :  Print
#  Input         :  int
#  Output        :  void
#  Description   :  To print factorial
#  Date          :  23/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Print(
            iNo              # Parameter to take input
         ):
    
    iFact = 1

    # Filter
    if(iNo < 0):
        iNo = -iNo

    for i in range(iNo, 1, -1):
        iFact = iFact * i

    print(iFact)

#################################################################
#
# Application to display factorial of number
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
#  Input  :    5
#  Output :    120
#  
#  Input  :    -5
#  Output :    120
# 
#  Input  :    4
#  Output :    24
#                
#################################################################