# Accept number from user and print its number line.

#################################################################
#
#  Function name :  Print
#  Input         :  int
#  Output        :  void
#  Description   :  To print number line
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

    for i in range(-iNo, iNo+1):    # Loop traversal
        print(i, end="\t")
    
    print("\n")

#################################################################
#
# Application to display number line
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
#  Input  :     4
#  Output :    -4	-3	-2	-1	0	1	2	3	4
#               
#################################################################