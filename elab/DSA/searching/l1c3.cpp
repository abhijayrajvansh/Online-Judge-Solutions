/**
 *    author: abhijayrajvansh  created: 11.11.2021 03:47:35
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void abhijayrajvansh (){}

void solve(){
    vector<int> arr; // storing all the sorted values acc to the fun
    for(int i = 1; i <= 6; i++){
        int m_times = i * floor(sqrt(i)) + ceil((double)i / 2);
        while(m_times--){
            arr.push_back(i);
        }
    }
    int n, m;
    cin >> n >> m;
    int count = 1;
    // counting distinct elements...
    for(int i = n; i <= m; i++){
        if(arr[i] != arr[i - 1]){
            count++;
        }
    }
    cout << count << nl;
}

int main (){
    int TT = 1;
    cin >> TT;
    while(TT--){
        solve();
    }
    return 0;
}