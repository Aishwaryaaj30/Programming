# Accept number from user and print all odd numbers up to n

#################################################################
#
#  Function name :  Print
#  Input         :  int
#  Output        :  void
#  Description   :  To print odd numbers upto n
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

    for i in range(iNo+1):    # Loop traversal
        if(i % 2 != 0):
            print(i, end="\t")
    
    print("\n")

#################################################################
#
# Application to display odd numbers upto n
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
#  Input  :    18
#  Output :    1	3	5	7	9	11	13	15	17
#               
#################################################################