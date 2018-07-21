m,n = map(int, input().strip().split(","))
a= []
for i in range (m):
    a.append(list(map(int,input().strip().split(","))))

high = [0]*m
for i in range(m):
    high[i] = a[i][-1]

ans = []

for i in range(m*n):
    h = max(high)
    ans.append(str(h))
    if len(a[high.index(h)]) != 0:
        a[high.index(h)].pop()
    if len(a[high.index(h)]) == 0:
        high[high.index(h)] = -1
    else:
        high[high.index(h)] = a[high.index(h)][-1]
print("".join(ans))
