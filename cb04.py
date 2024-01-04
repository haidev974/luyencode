a, b = map(int, input().split())
print(a+b)
print(a-b)
print(a*b)
if b == 0:
    print('ERROR')
else:
    print(f'{a/b:.2f}')
