#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int n, w;

long long solve() {
    cin >> n >> w;

    vector<long long> v(n);
    vector<long long> we(n);
    vector<long long> memo(w + 1, 0);

    for(int i = 0; i < n; i++) cin >> we[i] >> v[i];

    for(int i = 0; i < n; i++) {
        for(int j = w - we[i]; j >= 0; j--) {
            memo[j + we[i]] = max(memo[j + we[i]], memo[j] + v[i]);
        }
    }
    
    return memo[w];
}

int main() {
    IOS
    
    cout << solve() << endl;

    return 0;
}

// const int MAXN = 100;
// const int MAXW = 1e5;

// int n, w;
// vector<long long> a, b;
// vector<vector<bool>> vis;
// vector<vector<long long>> memo;

// long long solve(int pos, int cap) {
//     if(pos == n) return 0;
//     if(vis[pos][cap]) return memo[pos][cap];

//     long long ans = solve(pos + 1, cap);
//     if(cap >= a[pos]) 
//         ans = max(ans, b[pos] + solve(pos + 1, cap - a[pos]));

//     vis[pos][cap] = true;
//     return memo[pos][cap] = ans;
// }

// int main() {
//     IOS
//     cin >> n >> w;
//     a.resize(n); b.resize(n);
//     vis.resize(n, vector<bool>(w + 1, false));
//     memo.resize(n, vector<long long>(w + 1));

//     for(int i = 0; i < n; i++) {
//         cin >> a[i] >> b[i];
//     }

//     cout << solve(0, w) << endl;

//     return 0;
// }