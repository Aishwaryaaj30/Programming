from functools import reduce

def checkeven(no):
    return (no % 2 == 0)

def increase(no):
    return no + 1

def sum(a,b):
    return a+b

data = [7,10,15,12,4,6,9,8,12,16]
print("Input data: ", data)

fdata = list(filter(checkeven, data))
print("Filter Output: ", fdata)

mdata = list(map(increase, fdata))
print("Map Output: ", mdata)

rdata = reduce(sum, mdata)
print("Reduce Output: ", rdata)