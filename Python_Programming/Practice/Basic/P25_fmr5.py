def Increase(A):
    return A+1

def Demo(task, value):
    result = []
    for no in value:
        ret = task(no)
        result.append(ret)
    
    return result

data = [13,17,10,14,11]

mdata = list(Demo(Increase, data))

print(mdata)