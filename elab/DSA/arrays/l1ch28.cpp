/**
 *    author: abhijayrajvansh  created: 07.12.2021 04:42:16
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define F(n) for(int i = 0; i < (int)(n); i++)
#define read(arr) int n; cin >> n; vector<int> arr(n); F(n) { cin >> arr[i]; }
void abhijayrajvansh (){}

void run_cases(){
    int n; cin >> n; 
    for(int i = 1; i <= n; i++){
        int even = 2, odd = 1;
        if(i % 2 == 0){
            for(int j = 1; j <= i; j++){
                cout << even << " " ;
                even += 2;
            }
        }
        else{
            for(int j = 1; j <= i; j++){
                cout << odd << " " ;
                odd += 2;
            }
        }
        cout << nl; 
    }
}

int main (){
    int TT = 1; 
    //cin >> TT;
    while(TT--){
        run_cases();
    }
}