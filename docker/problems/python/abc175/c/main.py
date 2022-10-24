#!/usr/bin/env pypy
X,K,D=map(int,input().split())
X=abs(X)

if(X-K*D>0):
  print(abs(X-K*D))
else:
  move_count=K-X//D
  jump_bef=X-D*(X//D)
  jump_afe=jump_bef-D
  if(move_count%2==0):
    print(abs(jump_bef))
  else:
    print(abs(jump_afe))
