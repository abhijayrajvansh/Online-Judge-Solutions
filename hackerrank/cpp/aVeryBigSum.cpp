/*
HackerRank Practice, No code snippets used, completely created and modified by
Author: abhijayrajvansh || abhijayrajvansh01@gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0; i<n; i++)

int main () {
    
    ll n, sum = 0;
    cin >> n;
    int ar[n];
    fo(i,n){
        cin >> ar[i];
    }
    fo(i,n){
        sum+=ar[i];
    }
    cout << sum;
    
    return 0;
}
