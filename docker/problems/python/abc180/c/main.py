#!/usr/bin/env pypy
n=int(input())

ans=[]
i=1
while i**2<=n:
  if(n%i==0):
    ans.append(i)
    if(i!=n//i):
      ans.append(n//i)
  i+=1

ans.sort()
for i in range(len(ans)):
  print(ans[i])