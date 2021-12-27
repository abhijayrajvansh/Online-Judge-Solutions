/**
 *    author: abhijayrajvansh  created: 12.11.2021 11:42:44
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void abhijayrajvansh (){}

bool check(vector<int> arr, int n, int c, int d){
    int cord = arr[0], cnt = 1;
    for(int i = 1; i < n; i++){
        if((arr[i] - cord) >= d){
            cnt++;
            cord = arr[i];
        }
        if(cnt == c){
            return true;
        }
    }
    return false;
}

void solve(){
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort (arr.begin(), arr.end());
    int res = 0;
    int low = 1, high = arr[n - 1] - arr[0];
    while(low <= high){
        int mid = (low + high) >> 1;
        if(check (arr, n, c, mid)){
            res = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }   
    cout << res << nl;
}

int main (){
    int TT = 1;
    cin >> TT;
    while(TT--){
        solve();
    }
    return 0;
}