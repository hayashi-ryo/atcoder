#!/usr/bin/env pypy
N=int(input())
An=list(map(int,input().split()))
Bn=list(map(int,input().split()))
ans=set()
for i in range(An[0],Bn[0]+1):
  ans.add(i)

for i in range(1,N):  
  setlist=set()
  for j in range(An[i],Bn[i]+1):
    setlist.add(j)
  ans=ans&setlist
print(len(ans))