/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main (){

    ll n; cin >> n;
    n =  n * 2;
    ll s1 = 0, s2 = 0;
    for(ll i = 0; i <= n; i++) {
        if(i % 2 != 0){
            s1 += i;
        }
        else{
            s2 += i;
        }
    }
    cout << s1 << " " << s2;
            
    return 0;
}