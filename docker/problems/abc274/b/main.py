#!/usr/bin/env pypy
H,W=map(int,input().split())
kabe=[]
for i in range(H):
  line=input()
  tmp=[]
  for j in range(W):
    tmp.append(line[j])
  kabe.append(tmp)

kabe_t=[]
for i in range(len(kabe[0])):
  tmp=[]
  for j in kabe:
    tmp.append(j[i])
  kabe_t.append(tmp)
answer=[]
for i in range(W):
  ans=0
  for j in range(H):
    if(kabe_t[i][j]=="#"):
      ans+=1
  answer.append(ans)
print(*answer)