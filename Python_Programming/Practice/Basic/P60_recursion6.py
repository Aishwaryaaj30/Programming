# input 4
# output * * * *

def display(no):
    while(no >= 1):
        print("*", end = " ")
        no = no - 1
    print()

def main():
    display(4)
    

if __name__ == "__main__":
    main()