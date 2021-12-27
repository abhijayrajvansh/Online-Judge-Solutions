/**
 *    author: abhijayrajvansh  created: 10.11.2021 21:43:10
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void abhijayrajvansh (){}

int printFrequency(string s){
    int maxx = INT_MIN;
    unordered_map <char, int> freq;
    for(int i = 0; i < (int)s.size(); i++){
        /*-------------------------------------------------
        comparision between signed and unsigned integer in 
        for loop from int i to size of string... must be 
        typecasted ti (int) - signed
        --------------------------------------------------*/
        if(freq.find(s[i]) == freq.end()){
            freq.insert(make_pair(s[i], 1));
        }
        else{
            freq[s[i]]++;
        }
        maxx = max(maxx, freq[s[i]]);
    }
    return maxx;
}

void solve(){
    int n;
    string s;
    cin >> n >> s;
    int count = printFrequency(s);
    if(count == 1){
        cout << 3 << nl;
        return;
    }
    int ans = 2 * count + 1;
    if(ans > n){
        cout << n;
    }
    else{
        cout << ans;
    }
}

int main (){
    int TT = 1;
    cin >> TT;
    while(TT--){
        solve();
    }
    return 0;
}