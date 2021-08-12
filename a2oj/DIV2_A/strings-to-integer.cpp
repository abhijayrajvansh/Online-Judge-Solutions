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
    string s;
    cin >> s;
    stringstream number(s);
    int n = 0;
    number >> n;
    cout << n << nl;
    // now n - > will have the value of string integer;
    cout << n + 1 << nl; // here it is acceptable
    //cout << s + 1 << nl; // here it is not acceptable
    return 0;
}