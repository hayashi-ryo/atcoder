#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &vec)
{
  /*
  vector の要素を出力する
  vec: 出力対象のvector
  */
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << ',';
  }
  cout << endl;
}

int main()
{
  int N = 0;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N; i++)
  {
    int d;
    cin >> d;
    vec[i] = d;
  }
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
  cout << vec.size() << endl;
}