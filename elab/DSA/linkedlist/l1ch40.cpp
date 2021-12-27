/**
 *    author: abhijayrajvansh  created: 07.12.2021 00:37:30
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define F(n) for(int i = 0; i < (int)(n); i++)
#define DriverCode1 int main (){ int TT = 1; //cin >> TT;
#define DriverCode2 while(TT--){solve();}}
void abhijayrajvansh (){}
void display(vector<int> arr1, vector<int> arr2, int half, int n){
    bool flag = false;
    if(n % 2 != 0){
        half--;
        flag = true;
    }
    F(half){
        cout << arr1[i] << " " << arr2[i] << " ";
    }
    if(flag) cout << arr1[arr1.size() - 1];
}
void reverse(vector<int> &arr){
    vector<int> temp = arr;
    int n = arr.size();
    int j = 0;
    for(int i = n - 1; i >= 0; i--){
        arr[j] = temp[i];
        j++;
    }
}
void solve(){
    int n; cin >> n; int half = (n + 1) / 2;
    vector<int> arr1(half);
    vector<int> arr2(n - half);
    F(half) cin >> arr1[i];
    F(n - half) cin >> arr2[i];
    cout << "Link list data:";
    F(half){
        cout << arr1[i] << " ";
    }
    F(n - half){
        cout << arr2[i] << " ";
    }
    reverse(arr2);
    cout << nl << "Link list data after fold:";
    display(arr1, arr2, half, n);
}

DriverCode1
DriverCode2