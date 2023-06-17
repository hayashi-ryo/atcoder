#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A_class(N);
  vector<int> B_class(N);
  for (int i = 0; i < N; i++)
  {
    int c;
    cin >> c;
    if (c == 1)
    {
      cin >> A_class[i];
      B_class[i] = 0;
    }
    else
    {
      cin >> B_class[i];
      A_class[i] = 0;
    }
  }

  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    int A_sum = 0;
    int B_sum = 0;
    int L, R;
    cin >> L >> R;
    for (int j = L - 1; j < R; j++)
    {
      A_sum += A_class[j];
      B_sum += B_class[j];
    }
    cout << A_sum << " " << B_sum << endl;
  }
}