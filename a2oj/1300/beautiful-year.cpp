/**
 *    author:   abhijayrajvansh
 *    created:  07.01.2022 04:06:04
**/
#include <bits/stdc++.h>
using namespace std;

bool flag = 1;

bool check (int n){
    vector<int> arr(4);
    for(int i = 3; i >= 0; i--){
        arr[i] = n % 10;
        n /=  10;
    }
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(arr[i] == arr[j]){
                return flag;
            }
        }
    }
    return flag = 0;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(flag != 0){
        n++;
        check(n);
    }
    cout << n;
    return 0;
}