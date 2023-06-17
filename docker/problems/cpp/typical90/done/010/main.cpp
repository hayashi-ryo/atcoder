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

  vector<int> s1(N + 1, 0);
  vector<int> s2(N + 1, 0);
  for (int i = 0; i < N; i++)
  {
    s1[i + 1] = s1[i] + A_class[i];
    s2[i + 1] = s2[i] + B_class[i];
  }

  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    int L, R;
    cin >> L >> R;
    cout << s1[R] - s1[L - 1] << " " << s2[R] - s2[L - 1] << endl;
  }
}