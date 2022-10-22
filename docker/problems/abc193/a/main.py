#!/usr/bin/env pypy
A,B=map(int,input().split())

discount=(A-B)/A*100.0
print(discount)