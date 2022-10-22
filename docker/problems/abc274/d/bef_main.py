#!/usr/bin/env pypy
N,x,y=map(int,input().split())
An=list(map(int,input().split()))

xlist=[0]
ylist=[0]
"""
for i in range(N):
  if(i%2!=0):
    for j in range(len(xlist)):
      xplus=xlist[j]+An[i]
      xminus=xlist[j]-An[i]
      if(xplus not in xlist):
        xlist.append(xplus)
      if(xminus not in xlist):
        xlist.append(xminus)
      print("loop", j , len(xlist))
  else:
    for j in range(len(ylist)):
      yplus=ylist[j]+An[i]
      yminus=ylist[j]-An[i]
      if(yplus not in ylist):
        ylist.append(yplus)
      if(yminus not in ylist):
        ylist.append(yminus)  

if(x in xlist and y in ylist):
  print("Yes")
else:
  print("No")
"""
for i in range(N):
  if(i%2==0):
    xlist.append(An[i])
  else:
    ylist.append(An[i])

xsum=sum(xlist)
xflag=0

import itertools
for i in range(2,len(xlist)):
  combi = list(itertools.combinations(xlist,i))
  for j in range(len(combi)):
    if(xsum-sum(combi[j])*2==x):
      xflag=1
      break
  if(xflag==1):
    break

if(xflag==0):
  print("No")
  exit()

ysum=sum(ylist)      
yflag=0

for i in range(2,len(ylist)):
  combi = list(itertools.combinations(ylist,i))
  for j in range(len(combi)):
    if(ysum-sum(combi[j])*2==y):
      yflag=1
      break
  if(yflag==1):
    break
if(yflag==0):
  if(sum(ylist)==y):
    s=1
  else
  print("No")
  exit()
  
if(xflag==1 and yflag==1):
  print("Yes")
else:
  print("No")
  