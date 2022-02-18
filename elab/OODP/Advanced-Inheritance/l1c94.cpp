/**
 *    author:   abhijayrajvansh
 *    created:  19.01.2022 14:08:11
**/
#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << '\n';
    }
    return 0;
}