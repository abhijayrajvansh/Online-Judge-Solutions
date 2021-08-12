/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

int main (){

    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int sp = n-i; sp > 0; sp--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
         printf("\n");
    }

    return 0;
}