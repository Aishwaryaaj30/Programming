# Accept radius of circle from user and calculate its area.
# Consider value of PI as 3.14

#################################################################
#
#  Function name :  CircleArea
#  Input         :  int
#  Output        :  int
#  Description   :  To calculate area of a circle
#  Date          :  25/06/2026
#  Author        :  Aishwarya Mohan Jadhav
#
#################################################################

def CircleArea(
                    radius          # Parameter to accept input
              ):
    
    Area = 3.14 * radius * radius   # Calculation

    return Area

#################################################################
#
# Application to display area of circle.
#
#################################################################

def Main():
    fradius = 0.0               # Variable to store radius
    fRet = 0.00                 # Variable to store return value from function

    fradius = float(input("Enter radius : "))

    fRet = CircleArea(fradius)  # Function call

    print(f"Area of circle is : {fRet:.4f}")

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
#  Output :    88.2026
#  
#  Input  :    10.4
#  Output :    339.6224
#               
#################################################################