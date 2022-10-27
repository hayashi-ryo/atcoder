#!/usr/bin/env pypy
N=int(input())
amari1=False
amari2=False
amari=N%3

strN=str(N)
for i in range(len(str(N))):
  a=int(strN[i])%3
  if(a==1):
    amari1=True
  elif(a==2):
    amari2=True
  
if(amari==0):
  print(0)
elif(amari==1):
  if(amari1==True):
    if(len(strN)<=1):
      print(-1)
    else:
      print(1)
  else:
    if(len(strN)<=2):
      print(-1)
    else:
      print(2)
elif(amari==2):
  if(amari2==True):
    if(len(strN)<=1):
      print(-1)
    else:
      print(1)
  else:
    if(len(strN)<=2):
      print(-1)
    else:
      print(2)