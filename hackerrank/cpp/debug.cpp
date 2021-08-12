#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	for(int i = 0 ; i < str.size(); i++){
       if(str[i] == ','){
           cout << endl;
           continue;
       }
       cout << str[i];
    }
}

int main() {
#ifndef ABHIJAY_DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    return 0;
}