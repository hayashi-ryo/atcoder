#!/usr/bin/env pypy
from decimal import *
A,B=map(float,input().split())
div=B/A
print('{:.03f}'.format(div))
