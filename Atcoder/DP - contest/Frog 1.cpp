#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5;
const int inf = 1e9 + 7;

int n;
int a[MAXN];
vector<bool> vis(MAXN, false);
int memo[MAXN];

int solve(int pos) {
    if(vis[pos]) return memo[pos];
    
    int ans = 0;
    if(pos - 1 >= 0) ans = abs(a[pos] - a[pos - 1]) + solve(pos - 1);
    if(pos - 2 >= 0) ans = min(ans, abs(a[pos] - a[pos - 2]) + solve(pos - 2));

    vis[pos] = true;
    return memo[pos] = ans;
}

int main() {

    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << solve(n - 1) << endl;

    return 0;
}