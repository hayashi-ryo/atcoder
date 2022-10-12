#!/usr/bin/env pypy
n=int(input())
output=[]
for n in range(n):
  s,t=map(str,input().split())
  t=int(t)
  output.append([t,s])
output.sort(reverse=True)
print(output[1][1])