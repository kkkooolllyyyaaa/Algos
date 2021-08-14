x = int(input())
s = 0
f = 1
for i in range(1, x + 1):
    f = f * i
    s = s + f
print(s)
