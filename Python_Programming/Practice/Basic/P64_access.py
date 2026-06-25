class Student:
    def __init__(self,A,B,C):
        self.Name = A       #public
        self._Age = B       #protected
        self.__Marks = C    #private

    def display(self):
        print(self.Name)
        print(self._Age)
        print(self.__Marks)

obj = Student("Rahul", 24, 89)
obj.display()

print(obj.Name)
print(obj._Age)
#print(obj.__Marks)