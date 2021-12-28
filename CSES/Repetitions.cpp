/**
 *    author:   abhijayrajvansh
 *    created:  28.12.2021 05:59:55
**/
#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    s = '_'+s+'_';
    int c = 0, ans = 0;
    for(int i = 0; i < (int)s.size(); i++){
        ans = max(ans, c);
        if(s[i] == s[i-1]){
            c++;
        }else{
            c = 1;
        }
    }
    cout << ans;
    return 0;
}