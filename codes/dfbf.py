
def maxim(a,b):
    if a > b:  
        return a
    else:
        return b    

M = 1000000007

t = int(input())

while t>0 :
    m,n = input().split()
    m = int(m)
    n = int(n)
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]

    result = 0 
    
    for i in range(0,m):
        for j in range(0,m):
            c = maxim(2,n)
            fib = [0] * c
            fib[0] = a[i]
            fib[1] = b[j]
            for k in range(2,n):
                fib[k] = fib[k-1] + fib[k-2]
            result = result + fib[n-1]
    print(result)
    t-=1

