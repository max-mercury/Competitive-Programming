n,p = map(int,input().split())
a = list(map(int,input().split()))
s  = 1

for i in range(0,len(a)):
    s = s*a[i]


print(a,n,p,s)
