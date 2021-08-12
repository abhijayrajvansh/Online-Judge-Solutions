#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define F(n) for(int i = 0; i < (n); i++)
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define RFO(i, z, n) for(int (i) = (z); (i) >= (n); (i)--)
#define nl "\n"

int main (){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;
    FO(i, 1, n){
        if(n % i == 0){
            cout << i << nl;
        }
    }   
    return 0;
}