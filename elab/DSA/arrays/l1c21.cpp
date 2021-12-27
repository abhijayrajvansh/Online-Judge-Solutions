/**
 *    author: abhijayrajvansh  created: 28.11.2021 11:33:42
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define F(n) for(int i = 0; i < (int)(n); i++)
#define DriverCode1 int main (){ int TT = 1; //cin >> TT;
#define DriverCode2 while(TT--){solve();}}
void abhijayrajvansh (){}

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    F(n){
        cin >> arr[i];
    }
    sort (arr.begin(), arr.end());
    for(int i = 0; i < n; i+=2){
        cout << arr[i+1] << " " << arr[i] << " ";
    }
}

DriverCode1
DriverCode2