# accept number from user and display table

#################################################################
#
#  Function name :  Print
#  Input         :  int
#  Output        :  void
#  Description   :  To print table
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

    for i in range(1, 11):
        iMult = iNo * i
        print(iMult, end="\t")

    print("\n")

#################################################################
#
# Application to display table
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
#  Output :    5	10	15	20	25	30	35	40	45	50
#  
#  Input  :    2
#  Output :    2	4	6	8	10	12	14	16	18	20
# 
#  Input  :    -5
#  Output :     5	10	15	20	25	30	35	40	45	50
#                
#################################################################