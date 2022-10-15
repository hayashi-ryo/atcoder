#!/usr/bin/env pypy
n=int(input())

input_line=input()
list=[]
for i in range(n):
  list.append(int(input_line.split()[i]))

ans=0
for i in range(n):
  x=list[i]
  for j in range(i,n):
    x=min(x,list[j])
    ans=max(ans,x*(j-i+1))
  
print(ans)