//No code snippets used, completely created and modified by
//Abhijay Rajvansh : abhijayrajvansh01@gmail.com 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int sizeofarray, sum = 0;
    cin>>sizeofarray;
    int ar[sizeofarray];

    for(int i=0; i < sizeofarray; i++){
        cin>>ar[i];
    }
    for(int i=0; i < sizeofarray; i++){
        sum+=ar[i];
    }
    cout<<sum<<endl;

    return 0;
}