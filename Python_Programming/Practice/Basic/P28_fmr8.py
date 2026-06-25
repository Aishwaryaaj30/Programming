checkeven = lambda no : (no % 2 == 0)
increase = lambda no : no + 1
sum = lambda a,b: a+b

from marvellousfmr import filterX, mapX, reduceX

data = [7,10,15,12,4,6,9,8,12,16]
print("Input data: ", data)

fdata = list(filterX(checkeven, data))
print("Filter Output: ", fdata)

mdata = list(mapX(increase, fdata))
print("Map Output: ", mdata)

rdata = reduceX(sum, mdata)
print("Reduce Output: ", rdata)
