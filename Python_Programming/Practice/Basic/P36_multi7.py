import threading

def display(value1, value2):
        print("Thread ID of child thread is: ", threading.get_ident())
        print("Inside Display", value1, value2)
        for i in range(10):
             print(i)

def main():
    print("Inside main")
    print("Thread ID of main is: ", threading.get_ident())
    T1 = threading.Thread(target = display, args = (11,21))  #new create  //  callback function
    T1.start()
    T1.join()
    print("End of Main")

if __name__ == "__main__":
    main()