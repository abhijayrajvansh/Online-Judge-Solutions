/**
 *    author:  abhijayrajvansh
 *    created: 21.08.2021  08:26:17
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

int kthGrammar(int n, int k) {
    if(n == 1 && k == 1){
        return 0;
    }
    int mid = pow(2, n - 1) / 2;
    if(k > mid){
        return ! kthGrammar(n - 1, k - mid);
    }
    else{
        return kthGrammar(n - 1, k);
    }

}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 4, k = 3;
    cin >> n >> k;
    cout << kthGrammar(n, k) << nl;    
    return 0;
}