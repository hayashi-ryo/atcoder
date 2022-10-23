#!/usr/bin/env pypy
N=int(input())
L=list(map(int,input().split()))
ans=0
def judge_triangle(a,b,c):
  if(a+b>c and
     b+c>a and
     c+a>b
     ):
    return True
  else:
    return False
for i in range(N):
  for j in range(i+1,N):
    for k in range(j+1,N):
      tmp={L[i],L[j],L[k]}
      if(len(tmp)==3 and judge_triangle(L[i],L[j],L[k])):
        ans+=1
print(ans)