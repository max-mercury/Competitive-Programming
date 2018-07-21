n,p = map(int,input().strip().split(","))
a = list(map(int,input().strip().split(",")))
count = 0
m = 1009
for i in range(0,len(a)):
    for j in range(i+1,len(a)):
        for k in range(j+1,len(a)):
            #print(a[i],a[j],a[k])
            s = a[i] + a[j] + a[k]
            if (s % p == 0):
                count +=1


print (count%m)
