#include <bits/stdc++.h>
using namespace std;

void printSum(int ar[], int n){
    int sum =  0;
    for (int i = 0; i < n; i++){
        sum += ar[i];
        cout << sum << " ";
    }
}
int main (){
    int arr[1000000];
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printSum(arr, n);
    return 0;
}