#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int n;

void solve() {
    cin >> n;

    int dp[n];

    dp[0] = 1;
    for(int i = 1; i < n; i++) {
        dp[i] = (4 * i) + dp[i - 1];
    }

    cout << dp[n - 1] << endl;
}
 
int main() {
    IOS

    solve();

    return 0;
}