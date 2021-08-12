/**
*    author: abhijayrajvansh
*    created: 31.07.2021  18:11:15
**/
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

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
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define RFO(i, z, n) for(int (i) = (z); (i) >= (n); (i)--)
#define pii pair<int, int>
#define sortall(x) sort(all(x))

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

#ifndef ONLINE_JUDGE
#define deb(x) cerr << #x <<": "; _print(x); cerr << endl;
#endif

void _print(ll t) {cerr << t;} void _print(int t) {cerr << t;} void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;} void _print(lld t) {cerr << t;} void _print(double t) {cerr << t;} void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p); template <class T> void _print(vector <T> v); template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v); template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void run_cases(){
    int n = 3;
    int arr[10];
    FO(i, 0, 3){
        cin >> arr[i];
    }
    int ans  = -1;
    FO(i, 0, 3){
        FO(j, 0, 3){
            if(arr[i] == arr[j]) continue;
            int curr = arr[i] + arr[j];
            ans = max(curr, ans);
        }
    }
    cout << ans << nl;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start1 = high_resolution_clock::now();

    ll TT = 1, i = 1;
    cin >> TT;
    while(TT--){
        cerr << "case #" << i << ": " << nl;
        run_cases();
        cerr << nl;
        i++;
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    cerr << "Time: " << duration . count() / 1000 << " ms";
}