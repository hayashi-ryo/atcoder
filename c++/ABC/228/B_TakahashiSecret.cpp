#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,x;
    cin >> N >> x;
    vector<int> friends(N);
    for (int i=0;i<N;i++) {
        int tmp=0;
        cin >> tmp;
        friends.at(i)=tmp;
    }
    vector<int> relation(0);
    relation.push_back(x);
    for (int i=0;i<N;i++) {
        int tmp=friends[relation[i]-1];
        relation.push_back(tmp);
    }
    sort(relation.begin(), relation.end());
    relation.erase(unique(relation.begin(),relation.end()),relation.end());

    cout << relation.size() << endl;
}