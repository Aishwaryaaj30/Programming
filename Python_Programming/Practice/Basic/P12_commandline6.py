import sys

def addition(no1, no2):
    ans = 0
    ans = no1 + no2
    return ans

def main():
    if(len(sys.argv) != 3):
        print("Insufficient number of arguments")
        return
    
    value1 = int(sys.argv[1])
    value1 = int(sys.argv[2])

    result = addition(value1, value2)

    print("Addition is: ", result)

if __name__ == "__main__":
    main()