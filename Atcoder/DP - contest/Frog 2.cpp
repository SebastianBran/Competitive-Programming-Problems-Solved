#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5;
const int inf = 1e9 + 7;

int n, k;
int a[MAXN];
vector<bool> vis(MAXN, false);
int memo[MAXN];

int solve(int pos) {
    if(vis[pos]) return memo[pos];
    int ans;

    if(pos == 0) ans = 0;
    else ans = inf;
    
    for(int i = 1; i <= k; i++) {
        if(pos - i >= 0) ans = min(ans, abs(a[pos] - a[pos - i]) + solve(pos - i));
        else break;
    }

    vis[pos] = true;
    return memo[pos] = ans;
}

int main() {

    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << solve(n - 1) << endl;

    return 0;
}