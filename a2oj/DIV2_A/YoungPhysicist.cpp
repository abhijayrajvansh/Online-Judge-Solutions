/**
*    author:  abhijayrajvansh
*    created: 12.08.2021  12:26:17
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

#ifdef ABHIJAY_DEBUG
#define deb(...) cerr << "["<< #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__);
#else
#define deb(...)
#endif

void run_cases(){
    int n; cin >> n;
    vector<vector<int>> arr(n, vector<int> (3));
    int sum1 = 0, sum2 = 0, sum3 = 0; 
    FO(i, 0, n){
        FO(j, 0, 3){
            int t; cin >> t;
            arr[i][j] = t;
        }
    }
    FO(i, 0, n){
        sum1 += arr[i][0];
        sum2 += arr[i][1];
        sum3 += arr[i][2];
    }
    deb(sum1, sum2 , sum3);
    cout << (sum1 == 0 && sum2 == 0 && sum3 == 0 ? "YES" : "NO") << nl;
}

int main() {
#ifndef ABHIJAY_DEBUG
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start1 = high_resolution_clock::now();
    int TT = 1, i = 1;
    // cin >> TT;
    cerr << "--------------------------------------\n";
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