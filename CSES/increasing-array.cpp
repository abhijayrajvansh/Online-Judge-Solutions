/**
 *    author:   abhijayrajvansh
 *    created:  28.12.2021 06:23:23
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll ans = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1]){
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << ans;
    return 0;
}