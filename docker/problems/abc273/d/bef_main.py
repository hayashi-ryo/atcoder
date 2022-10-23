#!/usr/bin/env pypy   

h,w,y,x=map(int,input().split())
x-=1
y-=1
kabe=[[0]*h for i in range(w)]
n=int(input())
for i in range(n):
  r,c=map(int,input().split())
  kabe[r-1][c-1]=1

q=int(input())
for i in range(q):
  d,l=map(str,input().split())
  l=int(l)
  for j in range(l):
    #左に進む
    if(d=="L"):
      if((x-1)<0):
        break
      elif(kabe[y][x-1]==1):
        break
      else:
        x-=1
    
    #右に進む
    if(d=="R"):
      if((x+1)>=w):
        break
      elif(kabe[y][x+1]==1):
        break
      else:
        x+=1
    
    #上に進む
    if(d=="U"):
      if((y-1)<0):
        break
      elif(kabe[y-1][x]==1):
        break
      else:
        y-=1
    
    #下に進む
    if(d=="D"):
      if((y+1)>=h):
        break
      elif(kabe[y+1][x]==1):
        break
      else:
        y+=1
  print(y+1,x+1)



