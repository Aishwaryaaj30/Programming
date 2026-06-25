# Accept temperature in Fahrenheit and convert it into Celsius

#################################################################
#
#  Function name :  FhtoCs
#  Input         :  int
#  Output        :  int
#  Description   :  To convert Fahrenheit into Celsius
#  Date          :  25/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def FhtoCs(
                Fahrenheit          # Parameter to accept 1st input
          ):
    
    iConvert = 0
    
    iConvert = (Fahrenheit - 32) * (5/9)        # Calculation

    return iConvert

#################################################################
#
# Application to convert Fahrenheit into Celsius
#
#################################################################

def Main():
    iTemperature = 0           # Variable to store temperature
    iRet = 0                   # Variable to store return value from function

    iTemperature = float(input("Enter temperature : "))

    iRet = FhtoCs(iTemperature)  # Function call

    print(f"Fahrenheit to Celsius is : {iRet:.4f}")

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
#  Output :    -12.2222
#  
#  Input  :    34
#  Output :    1.1111
# 
#################################################################