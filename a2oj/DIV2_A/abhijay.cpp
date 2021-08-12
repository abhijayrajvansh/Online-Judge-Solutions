/**
*    author:  abhijayrajvansh
*    created: 12.08.2021  12:41:54
**/
#include <bits/stdc++.h>

using namespace std;
#define nl "\n"

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

int main (){
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("debug.txt", "w", stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 10;
    cin >> n;

    int sum1 = 0, sum2 = 0, sum3 = 0;
    vector<vector<int>> arr (n, vector<int> (3));
    for(int i = 0; i < n; i++){
        for(int j = 0;j < 3; j++){
            int t; cin >> t;
            arr[i][j] = t;
        }
    }
    for(int i = 0; i < n; i++){
        sum1 += arr[i][0];
        sum2 += arr[i][1];
        sum3 += arr[i][2];
    }
    cout << sum1 << nl << sum2 << nl << sum3 << nl;
    return 0;
}