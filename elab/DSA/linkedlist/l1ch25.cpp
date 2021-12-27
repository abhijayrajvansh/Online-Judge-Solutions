/**
 *    author: abhijayrajvansh  created: 07.12.2021 02:25:54
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define F(n) for(int i = 0; i < (int)(n); i++)
#define read(arr) int n; cin >> n; vector<int> arr(n); F(n) { cin >> arr[i]; }
void abhijayrajvansh (){}

int a = -1, b = -1;
void getCoordinates(vector<vector<int>> &arr, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 1){
                a = i; b = j;
                return;
            }
        }
    }
}

void displayMat(vector<vector<int>> &arr, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << nl;
    }
}

void run_cases(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr; // (m, vector<int> (n));
    for(int i = 0; i < m; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            int val; cin >> val;
            temp.push_back(val);
        }
        arr.push_back(temp);
    }

    getCoordinates(arr, m, n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i >= a || j >= b){
                arr[i][j] = 1;
            }
        }
    }
    displayMat(arr, m, n);
}

int main (){
    int TT = 1; 
    //cin >> TT;
    while(TT--){
        run_cases();
    }
}
