import threading

def display(value1, value2):
        print("Inside Display", value1, value2)

def main():
    print("Inside main")
    T1 = threading.Thread(target = display, args = (11,21))  #new create  //  callback function
    T1.start()

if __name__ == "__main__":
    main()