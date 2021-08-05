#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int n;

void solve() {
    cin >> n;

    int a[n], dp[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    
    dp[0] = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] > a[i - 1]) dp[i] = dp[i - 1] + 1;
        else dp[i] = 1;
    }

    int maxi = *max_element(dp, dp + n);

    cout << maxi << endl;
}

int main() {
    IOS

    solve();

    return 0;
}