/*````````````````````````````HackerRank.com````````````````````````````````
~~~~~~~~~~~Author: abhijayrajvansh || abhijayrajvansh01@gmail.com~~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
    int n , q;
    cin >> n >> q;
    int size, row, col, data;
    vector<vector<int>>n_vector;
    for(int i = 0; i < n; i++){
        cin >> size;
        vector<int>i_vector;
        for(int j = 0; j < size; j++){
            cin >> data;
            i_vector.push_back(data);
        }
        n_vector.push_back(i_vector);
    }
    for(int i = 0; i < q; i++){
        cin >> col >> row;
        cout << n_vector[col][row] << endl;
    }

    return 0;
}