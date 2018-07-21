def inv_count(arr, n):
    inv_count = 0
    for i in range(n):
        for j in range(i+1, n):
            if (arr[i] > arr[j]):
                inv_count += 1
 
    return inv_count

n = int(input())
a = list(map(int,input().strip().split(",")))
f = []

for i in a:
     b = bin(i)
     bits = [ones for ones in b[2:] if ones=='1']
     f.append(len(bits))

ans = inv_count(f,len(f))

print (ans)
