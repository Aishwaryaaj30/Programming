# input 4
# output 10 

sum = 0

def add(no):
    global sum
    if(no >= 1):
        sum = sum + no
        no = no - 1
        add(no)
    return sum

def main():
    ret = add(4)
    print(ret)
    
if __name__ == "__main__":
    main()