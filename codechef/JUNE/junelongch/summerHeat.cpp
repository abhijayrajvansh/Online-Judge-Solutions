/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/
// June Long Challenge 

#include <bits/stdc++.h>
using namespace std;

int coconut(int a, int b, int c, int d){
    return (c / a) + (d / b);
}

int main (){

    int t; cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << coconut(a, b, c, d) << endl;
    }
    
    return 0;
}