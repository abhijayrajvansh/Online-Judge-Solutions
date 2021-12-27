/**
 *    author:   abhijayrajvansh
 *    created:  28.12.2021 04:50:37
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, s = 0, val; cin >> n;
    for(long long i = 0; i < n - 1; i++){
        cin >> val;
        s += val;
    }
    cout << (n * (n + 1)) / 2  - s;
    return 0;
}