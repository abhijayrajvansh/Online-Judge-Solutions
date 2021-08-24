/**
 *    author:  abhijayrajvansh
 *    created: 24.08.2021  04:59:57
**/
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI (3.141592653589793238462)
#define Divider(); cerr << "--------------------------------------\n";
#define set_bits __builtin_popcountll

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define nl "\n"

#define sz(x) ((int)(x).size())
#define F(n) for(int i = 0; i < (n); i++)
#define FO(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define RFO(i, z, n) for(int (i) = (z); (i) >= (n); (i)--)
#define trav(a, x) for(auto& a : x)

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream&
operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifdef ABHIJAY_DEBUG
#define deb(...) cerr << "["<< #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__);
#else
#define deb(...)
#endif

void run_cases(){
    int n;
    cin >> n;
    int ans = min(n, 2);
    map<int, int> cnt;
    FO(i, 0, n){
        int x;
        cin >> x;
        cnt[x]++;
    }
    trav(a, cnt){
        ckmax(ans, a.ss);
    }
    cout << n - ans << nl;
}

int main() {
#ifndef ABHIJAY_DEBUG
    freopen("debug.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    auto begin = std::chrono::high_resolution_clock::now();
    int TT = 1, i = 1;
    cin >> TT;
    Divider();
    while(TT--){
        cerr << "case #" << i << ": " << nl;
        run_cases();
        cerr << nl;
        i++;
    }
    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(3) << fixed;
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << nl;
}
