import string
t = int(input())
p = list(string.ascii_lowercase)

while (t>0):
    ans =[]
    c = input()
    for i in c:
        for j in range(0,25):
            if i==p[j]:
                ans.append(p[25-j])
    print (''.join(ans))
    t-=1
