/**
 *    author:   abhijayrajvansh
 *    created:  07.01.2022 02:48:55
**/
#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    s = s;
    int n = s.size();
    int i = 0;
    while(n--){
        if(s[i] == '-' && s[i+1] == '-'){
            cout << 2;
            i+=2;
        }
        else if(s[i] == '-' && s[i+1] == '.'){
            cout << 1;
            i+=2;
        }
        else if(s[i] == '.'){
            cout << 0;
            i++;
        }
    }
    return 0;
}