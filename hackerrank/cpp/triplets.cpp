/*
HackerRank Practice, No code snippets used, completely created and modified by
Author: abhijayrajvansh || abhijayrajvansh01@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main (){
    
    int a[3], b[3], ap=0, bp =0;
    cin >> a[0] >> a[1] >> a[2]; 
    cin >> b[0] >> b[1] >> b[2];  

    int i=0;
    while(i<3){
        if(a[i] > b[i]){
            ap+=1;
            i++;
        }
        else if(a[i] < b[i]){
            bp+=1;
            i++;
        }
        else if(a[i] == b[i]){
            ap+=0;
            bp+=0;
            i++;
        }
    }
    cout << ap <<" "<< bp <<endl;
    return 0;
}
