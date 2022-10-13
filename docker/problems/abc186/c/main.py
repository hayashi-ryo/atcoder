#!/usr/bin/env pypy

def judge_ten(x):
  x=str(x)
  if("7" in x):
    return True
  else:
    return False

def judge_eight(x):
  s=""
  while x>0:
    s=str(x%8)+s
    x//=8
  if("7" in s):
    return True
  else:
    return False

n=int(input())
ans=0
for i in range(1,n+1):
  if(judge_eight(i)==False and judge_ten(i)==False):
    ans+=1
print(ans)