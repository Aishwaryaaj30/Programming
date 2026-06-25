fact = 1

def factorial(no):
    global fact
    if(no >= 1):
        fact = fact * no
        no = no - 1
        factorial(no)
    return fact

def main():
    ret = factorial(4)
    print(ret)
    
if __name__ == "__main__":
    main()