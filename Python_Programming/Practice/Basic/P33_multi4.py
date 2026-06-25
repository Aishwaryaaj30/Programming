import threading

def display():
        print("Inside Display")

def main():
    print("Inside main")
    T1 = threading.Thread(target = display)  #new create  //  callback function
    T1.start()

if __name__ == "__main__":
    main()