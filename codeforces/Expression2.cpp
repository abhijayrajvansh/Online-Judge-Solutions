/**
 *    author:  abhijayrajvansh
 *    created: 28.08.2021  00:59:20
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int ans1 = a + (b * c);
    int ans2 = a * (b + c);
    int ans3 = a * b * c;
    int ans4 = (a + b) * c;
    int ans5 = a + b + c;
    cout << max({ans1, ans2, ans3, ans4, ans5});

    return 0;
}