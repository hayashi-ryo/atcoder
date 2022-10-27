#include <bits/stdc++.h>
using namespace std;
int main()
{
  int A1,A2,A3;
  cin >> A1 >> A2 >> A3;
  string ans = "No";
  //(A1,A2,A3)
  if(A3-A2 == A2-A1) ans = "Yes";
  //(A1,A3,A2)
  if(A2-A3 == A3-A1) ans = "Yes";
  //(A2,A1,A3)
  if(A3-A1 == A1-A2) ans = "Yes";
  //(A2,A3,A1)
  if(A1-A3 == A3-A2) ans = "Yes";
  //(A3,A1,A2)
  if(A2-A1 == A1-A3) ans = "Yes";
  //(A3,A2,A1)
  if(A1-A2 == A2-A3) ans = "Yes";
  cout << ans << endl;
}
