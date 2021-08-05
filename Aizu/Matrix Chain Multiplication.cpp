#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define end '\n'

const int MAXN = 100;
int R[MAXN];
int C[MAXN];
int memo[MAXN][MAXN];
vector<vector<bool>> vis(MAXN, vector<bool>(MAXN, false));

int dp(int l, int r) {
    if(l == r) return 0;
    if(vis[l][r]) return memo[l][r];

    int ans =  1e9 + 7;
    for(int k = l; k < r; k++) ans = min(ans, dp(l, k) + dp(k + 1, r) + R[l] * R[k + 1] * C[r]);

    vis[l][r] = true;
    return memo[l][r] = ans;
}

int main() {
    int n;

    cin >> n;
    for(int i = 0; i < n; i++) cin >> R[i] >> C[i];
    
    cout << dp(0, n - 1) << endl;

    return 0;
}