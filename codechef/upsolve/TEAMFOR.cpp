/**
 *    author:  abhijayrajvansh
 *    created: 23.08.2021  23:06:44
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int prg = 0, eng = 0, both = 0, none = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1' && t[i] == '1'){
                both++;
            }
            else if(s[i] == '1' && t[i]) prg++;
            else if(t[i] == '1') eng++;
            else{
                none++;
            }
        }
        // deb(eng, prg, both, none);

        int ans = 0, minn = 0;
        // ans = min(eng, prg);
        // eng -= ans;
        // prg -= ans;
        // ans += min(both, (eng+prg+none));
        // both -= ans;
        // cout << ans + (both / 2) << nl;
        minn = min(prg, eng);
        prg -= minn;
        eng -= minn;
        ans += minn;
        minn = min (both, prg+eng+none);
        both -= minn;
        ans += minn;
        cout << ans + (both / 2) << nl;
    }
    return 0;
}