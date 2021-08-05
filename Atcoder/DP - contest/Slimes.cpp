#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int MAXN = 400;
int n;
long long a[MAXN];
vector<vector<bool>> vis(MAXN, vector<bool>(MAXN, false));
long long memo[MAXN][MAXN];
long long sum[MAXN + 1];

long long DP(int i, int j) {
    if(i == j) return 0;
    if(vis[i][j]) return memo[i][j];

    long long ans = 1e18;
    for(int k = i; k < j; k++) {
        ans = min(ans, DP(i, k) + DP(k + 1, j) + (sum[j + 1] - sum[i]));
    }

    vis[i][j] = true;
    return memo[i][j] = ans;
}

int main() {
    IOS

    cin >> n;
    sum[0] = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum[i + 1] = a[i] + sum[i];
    }

    cout << DP(0, n - 1) << endl;

    return 0;
}