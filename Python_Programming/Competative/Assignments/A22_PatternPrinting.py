# Accept number from user an print numbers till that number.

#################################################################
#
#  Function name :  Print
#  Input         :  int
#  Output        :  void
#  Description   :  Pattern printing
#  Date          :  23/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Print(
            iNo             # Parameter to take input
         ):
    
    # Filter
    if(iNo < 0):
        iNo = -iNo

    for i in range(1,iNo + 1):    # Loop traversal
        print(i, end="\t")
    
    print("\n")

#################################################################
#
# Application to display pattern on screen 
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
#  Input  :    8
#  Output :    1	2	3	4	5	6	7	8
#               
#################################################################