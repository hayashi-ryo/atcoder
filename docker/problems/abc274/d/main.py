#!/usr/bin/env pypy
N,x,y=map(int,input().split())
An=list(map(int,input().split()))

xlist=[]
ylist=[]
for i in range(len(An)):
  if(i%2==0):
    xlist.append(An[i])
  else:
    ylist.append(An[i])
  