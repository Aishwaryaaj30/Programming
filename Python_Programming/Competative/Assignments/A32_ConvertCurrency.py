# Accept amount in US dollor and return its corresponding value in Indian currency.
# Consider 1$ as 70 rupees

#################################################################
#
#  Function name :  DollorToINR
#  Input         :  int
#  Output        :  int
#  Description   :  to print dollor in Indian currency
#  Date          :  23/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def DollorToINR(
                iNo             # Parameter to take input
               ):
    
    iDollor = 70                # Variable to store dollor price

    iRup = iNo * iDollor        # Variable to convert price of currency

    return iRup
  
#################################################################
#
# Application to display dollor in Indian currency 
#
#################################################################

def Main():
    iValue = 0                      # Variable to store input
    iRet = 0                        # Variable to store return value of function 

    iValue = int(input("Enter number : "))

    iRet = DollorToINR(iValue)      # Function call

    print("Value in INR is ", iRet)

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
#  Input  :    10
#  Output :    700
#   
#  Input  :    3
#  Output :    270
#   
#  Input  :    1200
#  Output :    84000
#           
#################################################################