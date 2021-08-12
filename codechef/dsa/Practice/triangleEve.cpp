/*````````````````````````````CODECHEF`````````````````````````````````
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

int triangleEverywhere(int a, int b, int c){
    
    if(a == b && b == c && c == a){
        return 1;
    }
    else if((a == b && a != c) || (b == c && c != a) || (c == a && c != b)){
        return 2;
    }
    else if(a != b && b != c && c != a){
        return 3;
    }

    return -1;
}
int main (){

    int a, b ,c;
    cin >> a >> b >> c;
    if((a + b <= c) || (b + c <= a) || (c + a <= b)){
        cout << -1;
    }
    else{
        int sol = triangleEverywhere(a, b, c);
        cout << sol;
    }
    return 0;
}