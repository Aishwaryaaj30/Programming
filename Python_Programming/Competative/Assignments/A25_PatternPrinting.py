# Accept number from user and print first 5 multiples of N

#################################################################
#
#  Function name :  Print
#  Input         :  int
#  Output        :  void
#  Description   :  To print 1st five multiples
#  Date          :  23/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Print(
            iNo              # Parameter to take input
         ):
    
    iMult = 0

    # Filter
    if(iNo < 0):
        iNo = -iNo

    for i in range(1, 6):    # Loop traversal
        iMult = iNo * i
        print(iMult, end="\t")
    
    print("\n")

#################################################################
#
# Application to display first five multiples of n
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
#  Input  :    4
#  Output :    4	8	12	16	20
#               
#################################################################