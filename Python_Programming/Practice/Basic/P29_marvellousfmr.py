def filterX(task,Values):
    result = []
    
    for no in Values:
        ret = task(no)d
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