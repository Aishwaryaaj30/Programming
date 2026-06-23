# Accept number from user and print that number of $ & * on screen.

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
    for i in range(iNo):    # Loop traversal
        print("$\t*\t", end="")
    
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
#  Input  :    5
#  Output :    $    *   $  *    $   *   $   *   $   *
#   
#  Input  :    3
#  Output :    $    *   $   *   $   *
#            
#################################################################