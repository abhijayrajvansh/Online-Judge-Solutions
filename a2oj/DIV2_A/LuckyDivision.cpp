/**
*    author: abhijayrajvansh
*    created: 05.08.2021  01:36:12
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
#define F(n) for(int i = 0; i < (n); i++)
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define RFO(i, z, n) for(int (i) = (z); (i) >= (n); (i)--)
#define pii pair<int, int>
#define sortall(x) sort(all(x))
#define rsortall(x) sort(all(x), greater<int>())
#define revi(n, arr) FO(i, 0, (n)){int t; cin >> t;(arr).pb(t);}

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

template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifndef ONLINE_JUDGE
#define deb(...) cerr << "["<< #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__);
#endif

void run_cases(){
    string s; cin >> s;
    stringstream num (s);
    int n = 0;
    num >> n;
    int i = 0;
    // if(n % 7 == 0 || n % 4 == 0){
    //     cout << "YES" << nl;
    //     return;
    // }
    /* does'nt need this because it checks for factors only i.e 4 and 7 */
    vi factor;
    int cnt = 0;
    FO(i, 1, n){
        if(n % i == 0){
            factor.pb(i);
            cnt++;
        }
    }
    int a = 0;
    // checking for all the factors if it's lucky or not ?!
    while(cnt--){
        string k = to_string(factor[a]); a++;
        i = 0;
        while(i < sz(k)){
            if(k[i] == '4' || k[i] == '7'){
                i++;
            }
            else{
                break;
            }
        }
        if(i == sz(k)){
            cout << "YES\n";
            return;
        }    
    }
    i = 0;
    while(i < sz(s)){
        if(s[i] == '4' || s[i] == '7'){
            i++;
        }
        else{
            break;
        }
    }
    cout << (i == sz(s) ? "YES\n" : "NO\n");
    //debug for case: 26 = input == 799 is lucky... code failed
    
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start1 = high_resolution_clock::now();
    int TT = 1, i = 1;
    //cin >> TT;
    while(TT--){
        cerr << "case #" << i << ": " << nl;
        run_cases();
        cerr << nl;
        i++;
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    int TIME = duration . count() / 1000;
    cerr << "Time: " << (float)TIME / 1000 << " sec";
}