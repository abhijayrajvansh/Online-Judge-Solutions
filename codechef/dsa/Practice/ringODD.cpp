/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

int main (){

    int n, m;
    cin >> n >> m;
    for(int i = n; i <= m; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }

    return 0;
}