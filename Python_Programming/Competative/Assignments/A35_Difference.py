# Write a program which returns difference between Even and odd factorial

#################################################################
#
#  Function name :  FactorialDiff
#  Input         :  int
#  Output        :  int
#  Description   :  To print difference between even & odd factorial
#  Date          :  23/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def FactorialDiff(
                    iNo              # Parameter to take input
                 ):
    
    iFactEven = 1                    # Variable to store sum of Even factorial
    iFactOdd = 1                     # Variable to store sum of Odd factorial
    iDiff = 0                        # Variable to store differnce 

    # Filter
    if(iNo < 0):
        iNo = -iNo

    for i in range(iNo, 1, -1):     # Loop traversal
        if(i % 2 != 0):
            iFactOdd = iFactOdd * i
        else:
            iFactEven = iFactEven * i

    iDiff = iFactEven - iFactOdd

    return iDiff

#################################################################
#
# Application to display difference between Even and odd factorial
#
#################################################################

def Main():
    iValue = 0              # Variable to store input
    iRet = 0                # Variable to store return value of function

    iValue = int(input("Enter number : "))

    iRet = FactorialDiff(iValue)           # Function call

    print("Factorial difference is ", iRet)

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
#  Output :    -7
#  
#  Input  :    -5
#  Output :    -7
# 
#  Input  :    10
#  Output :    2895
#                
#################################################################