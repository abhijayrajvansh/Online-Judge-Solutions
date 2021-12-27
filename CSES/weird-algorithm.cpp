/**
 *    author:   abhijayrajvansh
 *    created:  27.12.2021 20:17:05
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'
#define ll long long
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; 
    cin >> n;
    cout << n << " ";
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
            cout << n << " ";
        }
        else{
            n *= 3;
            ++n;
            cout << n << " ";
        }
    }
    return 0;
}