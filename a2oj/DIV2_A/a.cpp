/**
*    author:  abhijayrajvansh
*    created: 11.08.2021  01:04:20
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"
#ifndef ONLINE_JUDGE 

int main (){
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("debug.txt", "w", stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}
#endif

//1st
void run_cases(){
    string s;
    cin >> s;
    bool space = true;
    FO(i, 0, s.size() - 3){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
            if(space == false){
                cout << " ";
            }
            continue;
        }
        else{
            space = false;
            cout << s[i];
        }
        
    }
}

//2nd
void run_cases(){
    string s;
    cin >> s;
    bool space = true;
    FO(i, 0, s.size() - 3){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
            if(space == false){
                cout << " ";
            }
            continue;
        }
        else{
            space == false;
            cout << s[i];
        }
    }
}