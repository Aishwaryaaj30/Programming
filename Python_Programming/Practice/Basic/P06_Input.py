def main():
    print("Enter no of Elements: ")
    size = int(input())

    data = list()

    print("Enter the values: ")
    for i in range(size):
        no = int(input())
        data.append(no)

        print("Enter elements are: ")
        for value in data:
            print(value)

    
if __name__ == "__main__":
    main()