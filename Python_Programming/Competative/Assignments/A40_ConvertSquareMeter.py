# Accept area in square feet and convert it into square meter

#################################################################
#
#  Function name :  SquareMeter
#  Input         :  int
#  Output        :  int
#  Description   :  To convert square feet into square meter
#  Date          :  25/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def SquareMeter(
                    iValue          # Parameter to accept 1st input
               ):
    
    iConvert = 0
    
    iConvert = (iValue * 0.092903)    # Calculation

    return iConvert

#################################################################
#
# Application to convert Square feet into square meter 
#
#################################################################

def Main():
    iArea = 0               # Variable to store temperature
    iRet = 0                # Variable to store return value from function

    iArea = float(input("Enter Area in square feet : "))

    iRet = SquareMeter(iArea)  # Function call

    print(f"Square feet into square meter is : {iRet:.6f}")

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
#  Output :    0.464515
#  
#  Input  :    7
#  Output :    0.650321
# 
#################################################################