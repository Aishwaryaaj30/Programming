import sys

def addition(no1, no2):
    ans = 0
    ans = no1 + no2
    return ans

def main():
    if(len(sys.argv) == 2):

        if(sys.argv[1] == "--h"):
            print("this application is used to perform addition of 2 numbers")
            return 
    
        if(sys.argv[1] == "--u"):
             print("Execute the code as: ")
             print("pythn filename.h first_input second_input")
             return 
    
    if(len(sys.argv) != 3):
        print("Insufficient number of arguments")
        print("you can use --h for help and --u for usage")
        return
    
    value1 = int(sys.argv[1])
    value1 = int(sys.argv[2])

    result = addition(value1, value2)

    print("Addition is: ", result)

if __name__ == "__main__":
    main()