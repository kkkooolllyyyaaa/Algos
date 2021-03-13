from decimal import Decimal

x = Decimal(input())
y = Decimal(input())
if (x - y > 0):
    print('>')
if (x - y < 0):
    print('<')
if (x - y == 0):
    print('=')

