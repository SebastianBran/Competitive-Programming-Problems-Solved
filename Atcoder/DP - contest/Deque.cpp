#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define end "\n"

const int MAXN = 3000;
int n;
vector<long long> v(MAXN);

long long solve() {
    long long dp[n][n];

    for(int L = n - 1; L >= 0; L--) {
        for(int R = L; R < n; R++) {
            if(L == R) dp[L][R] = v[L];
            else dp[L][R] = max(v[L] - dp[L + 1][R], v[R] - dp[L][R - 1]);
        }
    }

    return dp[0][n - 1];
}

int main() {
    IOS
    cin >> n;

    for(int i = 0; i < n; i++) cin >> v[i];

    cout << solve();

    return 0;
}