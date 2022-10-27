#!/usr/bin/env pypy
n,k=map(int,input().split())

friend=[]
for i in range(n):
  a,b=map(int,input().split())
  friend.append([a,b])

friend.sort()
now=0
now+=k
for i in range(n):
  friend_village=friend[i][0]
  friend_money=friend[i][1]
  if(friend_village<=now):
    now+=friend_money
  else:
    break
  
print(now)