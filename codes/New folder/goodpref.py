t = int(input())

while t > 0:
    s,n = input().split()
    ct=0
    ca=0
    cb=0
    temp=''
    for i in range(0,int(n)):
        temp = temp + s
        
    for j in temp:
        if j == 'a':
            ca+=1
        elif j == 'b':
            cb+=1
        if ca > cb:
            ct+=1
    t-=1
    print(ct)
