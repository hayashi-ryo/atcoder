#!/usr/bin/env pypy
sx,sy,gx,gy=map(int,input().split())
sy*=-1
if(gx==sx):
  print(gx*1.0)
else:
  a=(gy-sy)/(gx-sx)
  b=sy-sx*a
  print(-1.0*b/a)