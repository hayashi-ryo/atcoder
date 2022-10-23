#!/usr/bin/env pypy
n=int(input())
line=input().split()
A=[]
for i in range(n):
  A.append(int(line[i]))

A.sort()
ans=0
gcd=0
for i in range(2,1001):
  tmp=sum(a%i==0 for a in A)
  if gcd<tmp:
    gcd=tmp
    ans=i

print(ans)