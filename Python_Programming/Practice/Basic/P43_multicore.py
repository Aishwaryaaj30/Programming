import multiprocessing.pool
import os
import time
import multiprocessing

def fun(no):
    print("PID is:", os.getpid())
    sum = 0
    for i in range(1, no):
        sum = sum + (i * i * i)
    return sum

def main():
    start_time = time.time()
    
    data = [1000000,2000000,3000000,4000000,5000000,6000000,7000000,80000000,9000000,10000000]
    result = []
    
    p = multiprocessing.Pool()
    result = p.map(fun,data)

    p.close()
    p.join()     #wait until everything finish

    end_time = time.time()
    
    print("Time required: ", end_time - start_time)

if __name__ == "__main__":
    main()