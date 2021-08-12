/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/
// June Long Challenge 

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void printMoney(ll D, ll d, ll p, ll q){
    ll a = p, diff = q, n = D / d;
    ll APsum = (d* (n * (2 * a + (n - 1) * diff) / 2));
    ll REMsum = APsum + ((D % d) * (a + n * diff));
    cout << REMsum << endl;
}
void solve(){
   int T;
   cin >> T;
   while(T--){
       ll D, d, p, q;
       cin >> D >> d >> p >> q;
       printMoney(D, d, p ,q);
    }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
	return 0;
}
    