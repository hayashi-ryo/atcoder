#!/usr/bin/env pypy
line=input()
output=0
for i in range(len(line)):
  if(line[i]=="-"):
    output-=1
  else:
    output+=1
print(output)