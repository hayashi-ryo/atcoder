#!/usr/bin/env pypy
n=int(input())
point=[]
for i in range(n):
  x,y=map(int,input().split())
  point.append([x,y])

for i in range(n):
  for j in range(i+1,n):
    for k in range(j+1,n):
      x1,y1=point[i][0],point[i][1]
      x2,y2=point[j][0],point[j][1]
      x3,y3=point[k][0],point[k][1]
      if(
        (y3-y1)*(x2-x1)==(y2-y1)*(x3-x1)        
      ):
        print("Yes")
        exit()
print("No")
      