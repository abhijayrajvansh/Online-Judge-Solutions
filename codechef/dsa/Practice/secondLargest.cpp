/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

void secondLargest(int arr[], int n){
    int res = -1, lar = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[lar]){
            res = lar;
            lar = i;
        }
        else if(arr[i] != arr[lar]){
            if(res == -1 || arr[i] > arr[res]){
                res = i;
            }
        }
    }
    cout << arr[res] << endl;
}
int main (){

    int n = 3;
    int arr[100];
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    secondLargest(arr, n);
    return 0;
}