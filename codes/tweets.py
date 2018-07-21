n,k = input().split()
n = int(n)
temp = int(k)
i = 0

o = [i for _ in range(0,n)]

while temp > 0:
    t = input()
    
    if (t == "CLOSEALL"):
        o = [i for _ in range(0,n)]
    else:
        m = int(t[6])
        if o[m-1] == 1:
            o[m-1] = 0
        else:
            o[m-1] = 1
    oc = 0 
    for j in o:
            oc += j

    print (j)
    temp-=1

        
