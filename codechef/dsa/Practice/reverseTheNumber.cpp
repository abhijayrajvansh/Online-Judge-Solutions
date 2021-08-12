/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

void reverseNum(int n){
    int fn = 0;
    while(n != 0){
        int lnum = n % 10;
        n / 10;
        fn = fn * 10 + lnum;
    }
    cout << fn;
}

int main (){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        reverseNum(n);
        printf("\n");
    }

    return 0;
}