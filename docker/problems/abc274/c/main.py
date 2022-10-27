#!/usr/bin/env pypy
N=int(input())
An=list(map(int,input().split()))
ameba={'1':0}


for i in range(N):
  cnt=ameba[str(An[i])]
  ameba[str(len(ameba)+1)]=cnt+1
  ameba[str(len(ameba)+1)]=cnt+1

for k,d in ameba.items():
  print(d)