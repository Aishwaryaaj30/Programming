# Accept width & height of rectangle from user and calculate its area.

#################################################################
#
#  Function name :  RectArea
#  Input         :  int
#  Output        :  int
#  Description   :  To calculate area of a rectangle
#  Date          :  25/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def RectArea(
                    Width,          # Parameter to accept 1st input
                    Height          # Parameter to accept 2nd input
              ):
    
    Area = Width * Height           # Calculation

    return Area

#################################################################
#
# Application to display area of Rectangle.
#
#################################################################

def Main():
    fWidth = 0.0               # Variable to store width
    fHeight = 0.0              # Variable to store height
    fRet = 0.00                # Variable to store return value from function

    fWidth = float(input("Enter width : "))

    fHeight = float(input("Enter height : "))

    fRet = RectArea(fWidth, fHeight)  # Function call

    print(f"Area of Rectangle is : {fRet:.3f}")

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
#  Input  :    5.3
#              9.78
#  Output :    51.834
#  
#################################################################