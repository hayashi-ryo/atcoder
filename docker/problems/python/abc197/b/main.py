#!/usr/bin/env pypy
h,w,x,y=map(int,input().split())
x-=1
y-=1
masu=[]
for i in range(h):
  s=input()
  s=list(s)
  masu.append(s)

ans=1

for i in range(1,h):
  if(0<=x-i<h):
    if(masu[x-i][y]=="#"):
      break
    else:
      ans+=1
    
for i in range(1,h):
  if(0<=x+i<h):
    if(masu[x+i][y]=="#"):
      break
    else:
      ans+=1

for i in range(1,w):
  if(0<=y-i<w):
    if(masu[x][y-i]=="#"):
      break
    else:
      ans+=1
      
for i in range(1,w):
  if(0<=y+i<w):
    if(masu[x][y+i]=="#"):
      break
    else:
      ans+=1

print(ans)