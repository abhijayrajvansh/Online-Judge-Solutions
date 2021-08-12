/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    int i = 0, j = n-1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main (){

    int n; cin >> n;
    int arr[100000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverseArray(arr, n);
    
    return 0;
}