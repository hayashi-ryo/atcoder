from collections import defaultdict
from bisect import bisect_left, bisect_right
h,w,rs,cs = map(int,input().split())
n = int(input())
rwall = defaultdict(list)
cwall = defaultdict(list)
for i in range(n):
  r,c = map(int,input().split())
  rwall[r].append(c)
  cwall[c].append(r)

for k in rwall.keys():
  rwall[k].sort()
for k in cwall.keys():
  cwall[k].sort()


q = int(input())
for i in range(q):
  d,l = map(str,input().split())
  l = int(l)
  if d == "L":
    t = bisect_right(rwall[rs],cs)
    if t == 0:
      cs = max(cs-l, 1)
    else:
      cs = max(cs-l, rwall[rs][t-1]+1)
  if d == "R":
    t = bisect_left(rwall[rs],cs)
    if t == len(rwall[rs]):
      cs = min(cs+l, w)
    else:
      cs = min(cs+l, rwall[rs][t]-1)
  if d == "U":
    t = bisect_right(cwall[cs],rs)
    if t == 0:
      rs = max(rs-l, 1)
    else:
      rs = max(rs-l, cwall[cs][t-1]+1)
  if d == "D":
    t = bisect_left(cwall[cs],rs)
    if t == len(cwall[cs]):
      rs = min(rs+l, h)
    else:
      rs = min(rs+l, cwall[cs][t]-1)
  print(rs,cs)
  