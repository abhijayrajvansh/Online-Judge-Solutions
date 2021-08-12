/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

int findme(int arr[], int n, int k){
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}

int main (){

    int n, k; cin >> n >> k;
    int arr[10000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sol = findme(arr, n, k);
    cout << sol;
    
    return 0;
}