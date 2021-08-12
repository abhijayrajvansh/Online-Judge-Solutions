/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

int main (){
    int a, b ,c;
    cin >> a >> b >> c;
    if((a + b + c == 180) && (a > 0 && b > 0 && c > 0) && ((a + b > c) || (b + c > a) || (c + a > b))){
        cout <<"YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}