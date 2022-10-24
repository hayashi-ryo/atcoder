#!/usr/bin/env pypy
from decimal import Decimal, ROUND_HALF_UP
def roundup(x,n):
  for i in range(n+1):
    s="1E"+str(i)
    x=int(Decimal(str(x)).quantize(Decimal(s), rounding=ROUND_HALF_UP))
  return x

x,k=map(int,input().split())
print(roundup(x,k))

