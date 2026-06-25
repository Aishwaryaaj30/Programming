# Accept distance & kilometer and convert it into meter

#################################################################
#
#  Function name :  KMtoMeter
#  Input         :  int
#  Output        :  int
#  Description   :  To convert kilometer to meter
#  Date          :  25/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def KMtoMeter(
                    iNo          # Parameter to accept 1st input
             ):
    
    iConvert = 0
    
    iConvert = iNo * 1000        # Calculation

    return iConvert

#################################################################
#
# Application to convert kilometer to meter
#
#################################################################

def Main():
    iDistance = 0              # Variable to store distance
    iRet = 0                   # Variable to store return value from function

    iDistance = float(input("Enter distance : "))

    iRet = KMtoMeter(iDistance)  # Function call

    print(f"Kilometer to meter is : {iRet:.0f}")
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
#  Output :    5000
#  
#  Input  :    12
#  Output :    12000
# 
#################################################################