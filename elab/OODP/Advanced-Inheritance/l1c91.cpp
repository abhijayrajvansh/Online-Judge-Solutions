/**
 *    author:   abhijayrajvansh
 *    created:  19.01.2022 14:12:36
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 5;
    vector<string> s(5);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    cout << "Name:" << s[0] << nl
            "Code:" << s[1] << nl
            "Pay:" << s[2] << nl
            "Experience:" << s[3] << nl
            "Company name:" << s[4] << nl;
    return 0;
}