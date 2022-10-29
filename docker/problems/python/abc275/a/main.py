#!/usr/bin/env pypy
N=int(input())
H=list(map(int,input().split()))
ans=-1
maxH=0
for i in range(N):
  if(maxH<H[i]):
    ans=i+1
    maxH=H[i]

print(ans)