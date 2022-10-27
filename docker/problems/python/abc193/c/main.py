#!/usr/bin/env pypy
N=int(input())
able_num=set()
for i in range(2,10**5+10):
  for j in range(2,1000):
    if(i**j<=N):
      able_num.add(i**j)
    else:
      break

print(N-len(able_num))