#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int n, d;
string s;

void solve() {
    cin >> n >> d >> s;
    
    vector<int> dp(n, 1e9 + 7);
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] == '1') {
            for(int j = i - 1; j >= max(0, i - d); j--) dp[i] = min(dp[i], dp[j] + 1);
        }
    }

    if(dp[n - 1] == 1e9 + 7) cout << -1 << endl;
    else cout << dp[n - 1] << endl;
}
 
int main() {
    IOS

    solve();

    return 0;
}