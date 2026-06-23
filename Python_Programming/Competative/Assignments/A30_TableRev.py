# accept number from user and display table in reverse order

#################################################################
#
#  Function name :  Print
#  Input         :  int
#  Output        :  void
#  Description   :  To print table in reverse order
#  Date          :  23/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def Print(
            iNo              # Parameter to take input
         ):
    
    iMult = 1

    # Filter
    if(iNo < 0):
        iNo = -iNo

    for i in range(10, 0, -1):
        iMult = iNo * i
        print(iMult, end="\t")

    print("\n")

#################################################################
#
# Application to display table in reverse order
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
#  Output :    50	45	40	35	30	25	20	15	10	5
#  
#  Input  :    2
#  Output :    20	18	16	14	12	10	8	6	4	2
# 
#  Input  :    -5
#  Output :     50	45	40	35	30	25	20	15	10	5
#                
#################################################################