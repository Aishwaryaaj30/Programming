class Circle:
    PI = 3.14

    def __init__(self, A):
        self.Radius = A

    def CalArea(self):
        Ans = 0.0
        Ans = Circle.PI * self.Radius * self.Radius
        return Ans

def main():
    obj = Circle(10.5)
    Ret = obj.CalArea()
    print("Area of Circle is :", Ret)

if __name__ == "__main__":
    main()