#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  int L_max = 1;
  int R_min = M;

  for (int i = 0; i < N; i++)
  {
    int L, R;
    cin >> L >> R;
    L_max = max(L_max, L);
    R_min = min(R_min, R);
  }

  if (L_max > R_min)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << R_min - L_max + 1 << endl;
  }

  return 0;
}
