/**
 *    author:   abhijayrajvansh
 *    created:  07.01.2022 22:53:19
**/
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--){
        ull x, y;
        cin >> x >> y;
        if(x == y){
            cout << (x * x) - (x - 1) << '\n';
        }
        else if(x > y){
            if(x % 2 == 0){
                cout << (x * x) - (y  - 1) << '\n';
            }
            else{
                cout << ((x - 1) * (x - 1)) + y << '\n';
            }
        }
        else{
            if(y % 2 == 0){
                cout << ((y - 1) * (y - 1)) + x << '\n';
            }
            else{
                cout << (y * y) - (x - 1) << '\n';
            }
        }
    }
    return 0;
}