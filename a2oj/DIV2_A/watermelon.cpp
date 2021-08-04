/**
*    author: abhijayrajvansh
*    created: 03.08.2021  10:39:20
**/
//Testing sol ..
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
//    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    int n; cin >> n;
    cout << ((n > 2 && n % 2 == 0) ? "YES" : "NO") << nl;
    return 0;
}
