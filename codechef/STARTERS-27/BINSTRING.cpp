/*    यो न हृष्यति न द्वेष्टि न शोचति न काङ्‍क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
````````````````````````````````````````````````````````````````````
 *    author:   abhijayrajvansh
 *    created:  23.02.2022 20:14:58
**/
#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

typedef pair<int, int> pii;
typedef pair<ld,ld> pdd;
typedef vector<pii> vpii;

typedef vector<int> vi; 
typedef vector<string> vs; 
typedef vector<vector<int>> vvi;
typedef vector<ld> vd;

#define rep(n) for(int i = 0; i < (n); i++)
#define fo(i, z, n) for(int (i) = (z); (i) < (n); (i)++)
#define rfo(i, z, n) for(int (i) = (z); (i) >= (n); (i)--)
#define trav(a, x) for(auto& a : x)
#define int long long

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define ins insert

int string_to_int(string s){
    
    stringstream str(s);
    int int_value = 0;
    str >> int_value;
 
    return int_value;
}
 
string int_to_string(int num){
 
    string str = to_string(num);
    return str;
}

template <class T> 
void re(vector<T> &arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}
template <class T> 
void display_matrix(vector<vector<T>> &mat, int n, int m){
    // N x M :-
    fo(i, 0, n){
        fo(j, 0, m){
            cerr << mat[i][j] << " ";
        }
        cerr << '\n';
    }
}

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

const char nl = '\n';

void run_case(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 1;
    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1]){
            c++;
        }
    }
    cout << c << nl;
}

int32_t main() {
#ifdef ABHIJAY_DEBUG
    // freopen("sample_input_1.txt", "r", stdin);
#else
    freopen("debug_error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    auto begin = std::chrono::high_resolution_clock::now();
    int TT = 1, i = 1;
    cin >> TT;
    while(TT--){
        // cerr << "case #" << i << ": " << nl;
        run_case();
        // i++;
    }
    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(3) << fixed;
    cerr << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << nl << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << nl;
}
/* stuff you should look for
    * int overflow and constraints, arrays, strings & vector bounds
    * special edge cases like (n=1?) or (n = 2?)
    * do smth instead of nothing and stay organized, plan your work & make a routine
    * WRITE STUFF DOWN, use pen and paper while solving problems and dry run edge cases
    * DON'T GET STUCK ON ONE APPROACH
    * All the best, Happy Coding !!
*/