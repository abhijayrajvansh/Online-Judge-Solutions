/*````````````````````````````````Codechef``````````````````````````````````
```````` Author: abhijayrajvans && ID: abhijayrajvansh01@gmail.com````*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void run_cases(){
    int n = 12345; int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;

}

int main() 
{
#ifndef ABHIJAY_DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	run_cases();

	return 0;
}