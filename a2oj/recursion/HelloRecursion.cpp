/**
 *    author:  abhijayrajvansh
 *    created: 20.08.2021  07:35:18
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

int arraySum(vector<int>& arr){
    if(arr.size() == 1){
        return arr[0];
    }
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    int temp_ans = arraySum(arr);
    return temp_ans + temp;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, test_num = 1; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }   
        int ans = arraySum(arr);
        cout << "Case " << test_num << ": " << ans << nl;
        test_num++;
    }
    return 0;
}