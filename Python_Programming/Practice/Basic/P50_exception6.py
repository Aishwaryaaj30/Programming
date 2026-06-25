def main():
    print("Enter first number: ")
    no1 = int(input())

    print("Enter second number: ")
    no2 = int(input())

    ans = 0
    try:
        ans = no1 / no2

    except ZeroDivisionError as zobj:
        print("Exception occured due to second input :", zobj)

    except ValueError as vobj:
        print("Invaild data type of input :", vobj)

    except Exception as eobj:
        print("Exception occured :", eobj)

    finally:
        print("Inside finally block")

    print("Division is:", ans)

if __name__ == "__main__":
    main()