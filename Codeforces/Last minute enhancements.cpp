#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int t, n;
vector<int> a;

int solve() {
    int dp[n];
    dp[0] = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i - 1]) {
            a[i]++;
            dp[i] = dp[i - 1] + 1;
        }
        else if(a[i] > a[i - 1]) dp[i] = dp[i - 1] + 1;
        else {
            a[i]++;
            dp[i] = dp[i - 1];
        }
    }

    return dp[n - 1];
}
 
int main() {
    IOS

    cin >> t;

    while(t--) {
        cin >> n;

        a.resize(n);
        for(auto &it : a) cin >> it;
        sort(a.begin(), a.end());

        cout << solve() << endl;
    }    

    return 0;
}