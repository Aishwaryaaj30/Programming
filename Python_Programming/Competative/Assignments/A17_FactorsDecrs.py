# Write a program which accepts one number from user and
# display its factors in decreasing order

"""
Algorithm
    START
        Accept number as iNo
        Display factors in decreasing order
        Display Result
    STOP
"""

#################################################################
#
#  Function name :  FactRev
#  Input         :  int
#  Output        :  void
#  Description   :  Display factors in decreasing order
#  Date          :  16/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def FactRev(
                iNo             # Variable to accept input
            ):
    # Updator
    if(iNo <= 0):
        iNo = -iNo

    for i in range((iNo // 2), 0, -1):
        if((iNo % i) == 0):
            print(i)
        
#################################################################
#
# Application to display factors in decreasing order
#
#################################################################

def Main():
    iValue = int(input("Enter number : "))  # Variable to store input

    FactRev(iValue)                         # Function call

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
#  Input  :    12
#  Output :    6 4 3 2 1
#               
#################################################################