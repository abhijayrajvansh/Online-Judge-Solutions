/**
 *    author:   abhijayrajvansh
 *    created:  28.12.2021 05:18:18
**/
#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char, int> freq;
    for(int i = 0; i < s.size(); i++){
        freq[s[i]]++;
    }
    /*-------------------------------------------------
    map<char, int> :: iterator it;
    for(it = freq.begin(); it != freq.end(); it++){
        cout << it->first << " " << it->second << endl;
    } 
    bit long process to traverse...
    also can be done using for each loop with "auto" keyword

    for(auto it = freq.begin(); it != freq.end(); it++){
        cout << it->first << " appeared " << it->second << " times" << '\n';
    }
    --------------------------------------------------*/
    // printing the highest value:
    int ans = 0;
    for(auto it = freq.begin(); it != freq.end(); it++){
        ans = max(ans, it->second);
    }
    cout << ans;
    return 0;
}