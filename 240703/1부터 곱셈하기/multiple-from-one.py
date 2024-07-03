n = int(input())
prod = 1
cnt = 0

for e in range(1,11):
    prod *= e
    cnt += 1
    if prod >= n :
        break
print(cnt)