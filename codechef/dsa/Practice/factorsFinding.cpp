/*codechef.com , No code snippets used, completely created and modified by
~~~~~~~~~~ Author: abhijay2711 || abhijayrajvansh01@gmail.com ~~~~~~~~*/

#include <bits/stdc++.h>
using namespace std;

int main (){
    int num, noOfFact = 0;
    cin >> num;
    for (int i = 1; i<num+1; i++){
        if(num%i==0){
            noOfFact+=1;
        }
    }
    cout << noOfFact << endl;
    for (int i = 1; i<num+1; i++){
        if(num%i==0){
            cout << i << " ";
        }
    }
    return 0;
}