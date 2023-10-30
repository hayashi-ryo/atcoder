#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> present(N);
  rep(i, N) cin >> present[i];
  sort(present.begin(), present.end());
  int maxPresents = 0;
  int rightPoint = 0, leftPoint = 0;
  while (rightPoint < N)
  {
    while (present[rightPoint] - present[leftPoint] >= M)
    {
      leftPoint++;
    }
    maxPresents = max(maxPresents, rightPoint - leftPoint + 1);
    rightPoint++;
  }

  cout << maxPresents << endl;
  return 0;
}
