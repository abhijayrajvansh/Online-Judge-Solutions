/**
 *    author:  abhijayrajvansh
 *    created: 24.08.2021  18:45:41
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin > n >> k;
        map<int, int> m;
        for(int i = 0; i < n; i++){
            int index;
            cin >> index;
            m[index]++;
        }
        int maxx = INT_MIN; int ans = 0;
        for(int i = 0; i < k; i++){
            ans += max_element
        }
    }

    return 0;
}