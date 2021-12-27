/**
 *    author: abhijayrajvansh  created: 03.12.2021 21:32:23
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define F(n) for(int i = 0; i < (int)(n); i++)
#define DriverCode1 int main (){ int TT = 1; //cin >> TT;
#define DriverCode2 while(TT--){solve();}}
void abhijayrajvansh (){}

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    F(n){
        cin >> arr[i];
    }
    for(int i = n - 1; i >= 0; i--){
        cout << arr[i] << " " ;
    }
}

DriverCode1
DriverCode2