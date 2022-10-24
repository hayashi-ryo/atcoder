#!/usr/bin/env pypy
S=input()
S="S"+S

ans=0
for i in range(len(S)):
  if(S[i]=="R"):
    if(S[i-1]=="R"):
      if(S[i-2]=="R"):
        ans=3
      else:
        ans=2
    else:
      ans=1
print(ans)