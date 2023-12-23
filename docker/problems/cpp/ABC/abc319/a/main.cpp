#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
int main()
{
  map<string, int> rank;
  rank["tourist"] = 3858;
  rank["ksun48"] = 3679;
  rank["Benq"] = 3658;
  rank["Um_nik"] = 3648;
  rank["apiad"] = 3638;
  rank["Stonefeang"] = 3630;
  rank["ecnerwala"] = 3613;
  rank["mnbvmar"] = 3555;
  rank["newbiedmy"] = 3516;
  rank["semiexp"] = 3481;
  string s;
  cin >> s;
  cout << rank.at(s) << endl;
}