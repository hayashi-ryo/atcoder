#!/usr/bin/env pypy
def g1(x):
  x=list(str(x))
  x.sort(reverse=True)
  x=int("".join(x))
  return x
  
def g2(x):
  x=list(str(x))
  x.sort()
  x=int("".join(x))
  return x

def f(x):
  return g1(x)-g2(x)

n,k=map(str,input().split())
ans=0
for i in range(int(k)):
  n=f(n)
print(n)
