#!/usr/bin/env pypy
n=int(input())
ans=0
for i in range(n):
  a,b=map(int,input().split())
  ans+=((b+1)*b)/2-((a-1)*a)/2

print(int(ans))