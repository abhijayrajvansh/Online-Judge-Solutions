/*codechef.com , No code snippets used, completely created and modified by
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for (int i = 0; i < n; i++)

int main (){
    
    int n;
    cin >> n;
    if(n%5==0 && n%11==0){
        cout << "BOTH";
    }
    else if(n%5==0 || n%11==0){
        cout << "ONE";
    }
    else {
        cout << "NONE";
    }
    return 0;
}