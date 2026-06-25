# input 4
# output * * * *

def display(no):
    if(no >= 1):
        print("*", end = " ")
        no = no - 1
        display(no)

def main():
    display(4)
    
if __name__ == "__main__":
    main()