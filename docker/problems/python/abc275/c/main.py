#!/usr/bin/env pypy
table=[]
for i in range(9):
  line=input()
  tmptable=[]
  for j in range(9):
    tmptable.append(line[j])
  table.append(tmptable)

ans=0
for i in range(9):
  for j in range(9):
    if(table[i][j]=="#"):
      # 下向き探索
      for ik in range(1,9-i):
        for jk in range(0,9-j):
          #index判定
          if(table[i+ik][j+jk]=="#"):
            if(
              i+ik-jk<9 and
              j+jk+ik<9 and
              i-jk+1>0  
            ):
              if(table[i+ik-jk][j+jk+ik]=="#" and
                 table[i-jk][j+ik]=="#"
                 ):
                ans+=1

print(ans)