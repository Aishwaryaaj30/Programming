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

data = [7,10,15,12,4,6,9,8,12,16]
print("Input data: ", data)

fdata = list(filterX(checkeven, data))
print("Filter Output: ", fdata)

mdata = list(mapX(increase, fdata))
print("Map Output: ", mdata)

rdata = reduceX(sum, mdata)
print("Reduce Output: ", rdata)
