/**
 *    author: abhijayrajvansh  created: 07.12.2021 01:27:29
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define F(n) for(int i = 0; i < (int)(n); i++)
#define read(arr) vector<int> arr(n); F(n) { cin >> arr[i]; }
void abhijayrajvansh (){}

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

int cnt = 0;
bool check(vector<int> arr, int k){
    for(int i = 1; i < k; i++){
        cnt++;
        deb(k)
        if(arr[i] < arr[i - 1]){
            deb(arr[i - 1], arr[i])
            return false;
        }
    }
    return true;
}
void solve(){
    int n, k;
    cin >> n >> k;
    read(arr);
    if(!check(arr, k)){
        cout << cnt << nl;
    }
    else{
        cout << 0 << nl;
    }
}

int main (){ 
    int TT = 1, i = 1; cin >> TT;
    while(TT--){
        cout << "Line #" << i << ": ";
        solve();
        i++;
    }
}