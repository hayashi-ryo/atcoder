#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    /* 
    全部燃え切った時間を計算し、その半分の距離を出力する    
    */
    int N=0;
    cin >> N;
    vector<double> Length(N);
    vector<double> Velocity(N);
    vector<double> Time(N);
    double time=0;
    for (int i=0;i<N;i++) {
        double tmplen=0.0,tmpver=0.0;
        cin >> tmplen >> tmpver;
        Length.at(i) = tmplen;
        Velocity.at(i) = tmpver;
        Time.at(i) = tmplen / tmpver;
        time += tmplen / tmpver;
    }
    // cout << "time" << time << endl;
    double tmpTime=0.0;
    double ans=0.00000;
    for (int i=0;i<N;i++) {
        tmpTime+=Time.at(i);
        // cout << "tmpTime" << tmpTime << endl;
        // cout << ans << endl;
        if (tmpTime==(time/2.0)) {
            ans+=Length.at(i);
            // cout << "A" << endl;
            break;
        } else if (tmpTime>(time/2.0)) {
            ans+=Velocity.at(i)*((time/2.0)-(tmpTime-Time.at(i)));
            // cout << "B" << endl;
            break;
        }
        ans+=Length.at(i);
        // cout << ans << endl;
    }
    cout << ans << endl;
}