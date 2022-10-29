#!/usr/bin/env pypy
def F(N):
  if(N==0):
    return 1
  else:
    return F(N//2)+F(N//3)
  F(N//2)

N=int(input())
print(F(N))