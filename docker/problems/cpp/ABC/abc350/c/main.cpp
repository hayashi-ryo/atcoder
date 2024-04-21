#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), perfectA;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    A[i]--;
  }
  vector<pair<int, int>> ans;
  // A[i] should be i+1, so we find the correct position for each number
  for (int i = 0; i < N; i++)
  {
    while (A[i] != i)
    {
      ans.emplace_back(i + 1, A[i] + 1);
      swap(A[i], A[A[i]]);
    }
  }

  cout << ans.size() << endl;
  for (auto &p : ans)
  {
    cout << p.first << " " << p.second << endl;
  }

  return 0;
}
