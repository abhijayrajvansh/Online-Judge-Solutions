/**
 *    author:   abhijayrajvansh
 *    created:  19.01.2022 13:52:42
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s, ph, ac, bal, ln, la;
        cin >> s >> ph >> ac >> bal >> ln >> la;
        cout << "Customer Name:" << s << nl << "Customer Phone No:" << ph << nl << "Customer A/c No:" << ac << nl << "Balance:" << bal << nl << "Loan No:" << ln << nl << "Loan Amount:" << la << nl;
    }
    return 0;
}