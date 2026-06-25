from functools import reduce

data = [7,10,15,12,4,6,9,8,12,16]
print("Input data: ", data)

fdata = list(filter(lambda no : (no % 2 == 0), data))
print("Filter Output: ", fdata)

mdata = list(map(lambda no : no + 1, fdata))
print("Map Output: ", mdata)

rdata = reduce(lambda a,b: a+b, mdata)
print("Reduce Output: ", rdata)