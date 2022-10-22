#!/usr/bin/env pypy
N=int(input())
cost_min=10**9
for i in range(N):
  a,p,x=map(int,input().split())
  # 買える判定
  if((x-a)>0):
    cost_min=min(cost_min,p)

if(cost_min==10**9):
  print(-1)
else:
  print(cost_min)
