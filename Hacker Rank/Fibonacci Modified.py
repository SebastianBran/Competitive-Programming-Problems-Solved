t1, t2, n = map(int, input().strip().split())
aux = int

for i in range(3, n + 1):
    aux = t2 * t2 + t1
    t1 = t2
    t2 = aux

print(aux)