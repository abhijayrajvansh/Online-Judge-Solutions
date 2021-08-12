/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

int main (){

    int n; cin >> n;
    int i, j, k;
    for(i = 1; i <= n; i++){
        if (i % 2 == 0){
            for(k = i * 5; k >= (i * 5) - 4; k--){
                cout << k << " ";
            }
            printf("\n");
        }
        else{
            for(j = (i * 5) - 4; j <= i*5; j++){
                cout << j << " ";
            }
            printf("\n");
        }
        
    }       
    return 0;
}