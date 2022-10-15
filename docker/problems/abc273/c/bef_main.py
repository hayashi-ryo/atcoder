#!/usr/bin/env pypy
n=int(input())
a=input().split()
list=[]
for i in range(n):
  list.append([int(a[i]),i,0])

list.sort(reverse=True)
cnt=0
for i in range(n):
  if(i==0):
    list[i][2]=0
    cnt+=1
  elif(list[i][0]==list[i-1][0]):
    list[i][2]=list[i-1][2]
  else:
    list[i][2]=cnt
    cnt+=1

list=sorted(list, key=lambda x: x[2])
ans=[0]*n
i=0
jstart=0
while (i<n):
  cnt=0
  for j in range(jstart,n):
    #if(j==5):
    #  print("test",cnt)
    if(list[j][2]==i):
      cnt+=1
      jstart+=1
      if(j==(n-1)):
        ans[i]=cnt  
    elif(list[j][2]>i):
      ans[i]=cnt
      break

  i+=1
for i in range(n):
  print(ans[i])
