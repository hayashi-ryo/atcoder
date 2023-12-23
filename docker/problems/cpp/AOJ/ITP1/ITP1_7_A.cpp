#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  while (1)
  {
    int m, f, r;
    cin >> m >> f >> r;
    // 終了判定
    if (m == -1 & f == -1 & r == -1)
    {
      break;
    }
    // いずれかの試験を欠席:F
    // 合計が30点未満:F
    else if (m == -1 | f == -1 | m + f < 30)
    {
      cout << "F" << endl;
    }
    // 合計が80点以降:A
    else if (m + f >= 80)
    {
      cout << "A" << endl;
    }
    // 合計が65以上80未満:B
    else if (65 <= m + f & m + f < 80)
    {
      cout << "B" << endl;
    }
    // 合計が50以上65未満:C
    // 再試験が50点以上:C
    else if ((50 <= m + f & m + f < 65) |
             50 <= r)
    {
      cout << "C" << endl;
    }
    // 合計が30以上50未満:D
    // かつ再試験が50点未満
    else if (30 <= m + f & m + f < 50 &
             r < 50)
    {
      cout << "D" << endl;
    }
  }
}