m = int(input())
a = []
a = list(map(int,input().strip().split(",")))
c=0
for i in range(0,m-2):
    for j in range(i+1,m-1):
        for k in range(j+1,m):
            if (a[i]!= a[j] and a[i]!=a[k] and a[k]!=a[j]):
                c+=1

print (c)
