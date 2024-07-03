a = int(input())

def 조건을_만족하지_않는지(i):
    if i % 2 == 0 and i % 4 != 0:
        return False
    if (i // 8) % 2 == 0:
        return False
    if i % 7 < 4:
        return False
    return True

result = []
for i in range(1, a + 1):
    if 조건을_만족하지_않는지(i):
        result.append(i)

print(" ".join(map(str, result)))