class Base:
    def display(self):
        print("Inside Base display")

class Derived(Base):
    def display(self):      # overrided method
        print("Inside Derived display")
    
def main():
    bobj = Base()
    dobj = Derived()
    
    bobj.display()
    dobj.display()

if __name__ == "__main__":
    main()