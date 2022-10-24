#!/usr/bin/env pypy
S=input()
T=input()
ans=1000
for i in range(len(S)-len(T)+1):
  incorrect=0
  for j in range(len(T)):
    if(S[i+j]!=T[j]):
      incorrect+=1
  ans=min(ans,incorrect)

print(ans)
