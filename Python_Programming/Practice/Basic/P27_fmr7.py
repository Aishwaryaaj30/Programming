checkeven = lambda no : (no % 2 == 0)
increase = lambda no : no + 1
sum = lambda a,b: a+b

def filterX(task,Values):
    result = []
    
    for no in Values:
        ret = task(no)
        if(ret == True):
            result.append(no)
    
    return result

def mapX(task,values):
    result = []

    for no in values:
        ret = task(no)
        result.append(ret)

    return result

def reduceX(task, values):
    result = 0
    
    for no in values:
        result = task(result,no)

    return result

def main():
    data = []
    print("Enter number of elements: ")
    size = int(input())
    print("Please enter numeric values: ")
    
    for i  in range(size):
        no = int(input())
        data.append(no)

    print("Input data: ", data)

    fdata = list(filterX(checkeven, data))
    print("Filter Output: ", fdata)

    mdata = list(mapX(increase, fdata))
    print("Map Output: ", mdata)

    rdata = reduceX(sum, mdata)
    print("Reduce Output: ", rdata)

if __name__ == "__main__":
    main()
