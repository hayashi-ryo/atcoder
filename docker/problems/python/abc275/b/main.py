#!/usr/bin/env pypy
A,B,C,D,E,F=map(int,input().split())
ABC=A*B*C
DEF=E*D*F

print((ABC-DEF)%998244353)