#problem
import threading

def display(value1, value2):
        print("Inside Display", value1, value2)
        for i in range(1000):
             print(i)

def main():
    print("Inside main")
    T1 = threading.Thread(target = display, args = (11,21))  #new create  //  callback function
    T1.start()
    print("End of Main")

if __name__ == "__main__":
    main()