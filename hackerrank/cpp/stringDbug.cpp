/**
*    author: abhijayrajvansh
*    13.07.2021  07:44:30
**/
#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define nl "\n"
#define PI (3.141592653589793238462)
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define foin for(int i = 0; i < n; i++)
#define matloop for(int i = 0; i < m; i++) for(int j = 0; j < n; j++)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void run_cases(){
    int n; scanf("%d", &n);
    double d; scanf("%lf", &d);
    char s[100];
    scanf("%*[\n]%[^\n]", s);
    cout << n << nl << d << nl << s << nl;

}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    //cin >> T;
    while(T--){
        run_cases();
    }
   return 0;
}