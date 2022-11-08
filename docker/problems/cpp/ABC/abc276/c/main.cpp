#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; i++)
  {
    cin >> p[i];
  }
  prev_permutation(p.begin(), p.end());
  for (int i = 0; i < N - 1; i++)
  {
    cout << p[i] << " ";
  }
  cout << p.back() << endl;
}