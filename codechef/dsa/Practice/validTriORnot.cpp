/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <iostream>
using namespace std;
#define ll long long

int findMe(ll arr[], ll n, ll k){
    for(ll i = 0; i < n; i++){
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}

int main (){
    ll n, k;
    cin >> n >> k;
    ll arr[1000000];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sol = findMe(arr, n, k);
    cout << sol;
    return 0;
}