# Prints all subarrays in arr[0..n-1]
def subArray(arr, n,m):
    c = 0
    for i in range(0,n):
        ans = 0
        for j in range(i,n):
            for k in range(i,j+1):
                ans = ans + arr[k]
            if ans == m:
                c+=1
 
    print (c)

t = int(input())

while (t>0):
    
    n,m = map(int,input().split())
    a = list(map(int,input().split()))
    print (a)
    subArray(a,n,m)
    t-=1

    
