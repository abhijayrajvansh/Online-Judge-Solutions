/**
 *    author:   abhijayrajvansh
 *    created:  30.12.2021 00:06:54
**/
#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<int, int> F;
        for(int i = 0; i < n; i++){
            F[arr[i]]++;
        }
        int ans = 0;
        for(auto it = F.begin(); it != F.end(); it++){
            int x = it->first;
            if(F.find(-x) == F.end()){
                if(it->first == 0){
                    ans++;
                }
                else if(it->second == 1){
                    ans++;
                }
                else if(it->second >= 2){
                    ans += 2;
                }
            }
            else{
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}