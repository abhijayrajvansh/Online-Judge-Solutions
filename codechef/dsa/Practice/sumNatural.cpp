/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main (){

    ll n; cin >> n;
    ll s = 0;
    for(ll i = 1; i <= n; i++){
        s += i;
    }
    cout << s << endl;;

    return 0;
}