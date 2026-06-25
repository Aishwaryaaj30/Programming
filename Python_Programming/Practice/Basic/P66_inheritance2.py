class Circle:
    PI = 3.14

    def __init__(self, A):
        print("Inside Circle constructor")
        self.Radius = A

    def CalArea(self):
        Ans = 0.0
        Ans = Circle.PI * self.Radius * self.Radius
        return Ans

class CircleX(Circle):
    def __init__(self, A):
        print("Inside CircleX constructor")
        super().__init__(A)

    def CalCircumference(self):
        Ans = 0.0
        Ans = 2 * Circle.PI * self.Radius
        return Ans

def main():
    obj = CircleX(10.5)
    ret = obj.CalArea()
    print("area of Circle is :", ret)
    ret = obj.CalCircumference()
    print("circumference of Circle is :", ret)

if __name__ == "__main__":
    main()
