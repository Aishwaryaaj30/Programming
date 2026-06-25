def Increase(A):
    return A+1

def Demo(task, value):
    for no in value:
        print(task(no))


data = [13,17,10,14,11]

Demo(Increase, data)