/**
 *    author: abhijayrajvansh  created: 18.11.2021 18:22:56
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void abhijayrajvansh (){}

int main (){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    vector<string> sen;
    string sp = " ";
    sen.push_back(sp);
    string s;
    while(s != "day."){
        cin >> s;
        sen.push_back(s);
    }
    int n = sen.size();
    vector<string> v;
    string val;
    while(val != "ADJECTIVES"){
        cin >> val;
        v.push_back(val);
    }
    string a, b, c;
    cin >> a >> b >> c;
    vector<string> ini = sen;
    // cout << v[1] << nl;
    for(int i = 1; i < n - 1; i++){
        if(sen[i] == "[AJ]"){
            sen[i] = a;
        }
        if(sen[i] == "[N]" && sen[i - 1] == "from"){
            sen[i] = v[2];
        }
        if(sen[i] == "[N]"){
            sen[i] = v[1];
        }
        if(sen[i] == "[AV]"){
            sen[i] = v[6];
        }
        if(sen[i] == "[V]"){
            sen[i] = v[10];
            if(sen[i] == "VERBS"){
                sen[i] = v[11];
            }
        }
        cout << sen[i] <<  " ";
    } cout << sen[n - 1]; 
    cout << nl;
    sen = ini;
    for(int i = 1; i < n - 1; i++){
        if(sen[i] == "[AJ]"){
            sen[i] = b;
        }
        if(sen[i] == "[N]" && sen[i - 1] == "from"){
            sen[i] = v[4];
        }
        if(sen[i] == "[N]"){
            sen[i] = v[3];
        }
        if(sen[i] == "[AV]"){
            sen[i] = v[7];
        }
        if(sen[i] == "[V]"){
            sen[i] = v[11];
            if(sen[i] == "VERBS"){
                sen[i] = v[11];
            }
        }
        cout << sen[i] << " ";
    }cout << sen[n - 1];
    return 0;
}