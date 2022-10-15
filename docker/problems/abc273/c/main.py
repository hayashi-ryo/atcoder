#!/usr/bin/env pypy
n=int(input())
a=input().split()
list=[]
for i in range(n):
  list.append([int(a[i])])

list.sort(reverse=True)

ans=[0]*n
ans[0]=1
j=0
for i in range(1,n):
  if(list[i]==list[i-1]):
    ans[j]+=1
  else:
    j+=1
    ans[j]=1
    

for i in range(n):
  print(ans[i])


