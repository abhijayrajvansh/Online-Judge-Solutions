/**
 *    author: abhijayrajvansh  created: 12.11.2021 00:06:45
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void abhijayrajvansh (){}
/*-------------------------------------------------
Facebook Hackercup 2017 qualification round question
string to int conversion and vice-versa
--------------------------------------------------*/
string bestStr(string str, bool findMax) {
  for(int startIdx = 0; startIdx < str.length() - 1; startIdx++) {
    int bestIdx = startIdx;

    for(int i = str.length() - 1; i >= startIdx + 1; i--) {
      if(startIdx == 0 && str[i] == '0') continue;

      if((!findMax && str[i] < str[bestIdx]) ||
        (findMax && str[i] > str[bestIdx])) {
        bestIdx = i;
      }
    }

    if(bestIdx != startIdx) {
      char tmp = str[startIdx];
      str[startIdx] = str[bestIdx];
      str[bestIdx] = tmp;
      break;
    }
  }
  return str;
}

void solve(){
    string str; cin >> str;
    cout << bestStr(str, false) << " " << bestStr(str, true) << endl;
}

int main (){
    int TT = 1;
    cin >> TT;
    while(TT--){
        solve();
    }
    return 0;
}