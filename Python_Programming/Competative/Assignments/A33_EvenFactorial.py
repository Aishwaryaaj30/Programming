# Write a program to find even factorial of given number

#################################################################
#
#  Function name :  EvenFactorial
#  Input         :  int
#  Output        :  void
#  Description   :  To print even factorial
#  Date          :  23/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def EvenFactorial(
                    iNo              # Parameter to take input
                 ):
    
    iFact = 1                        # Variable to store sum factorial

    # Filter
    if(iNo < 0):
        iNo = -iNo

    for i in range(iNo, 1, -1):     # Loop traversal
        if(i % 2 == 0):
            iFact = iFact * i

    return iFact

#################################################################
#
# Application to display even factorial of number
#
#################################################################

def Main():
    iValue = 0              # Variable to store input
    iRet = 0                # Variable to store return value of function

    iValue = int(input("Enter number : "))

    iRet = EvenFactorial(iValue)           # Function call

    print("Even factorial of number is : ", iRet)

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
#  Output :    8
#  
#  Input  :    -5
#  Output :     8
# 
#  Input  :    10
#  Output :    3840
#                
#################################################################