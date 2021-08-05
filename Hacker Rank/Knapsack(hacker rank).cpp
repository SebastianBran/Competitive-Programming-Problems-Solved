#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int t, n, k;

void solve() {
    cin >> n >> k;

    vector<int> a(n);
    vector<int> memo(k + 1, 0);
    for(auto &it : a) cin >> it;

    memo[0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = a[i]; j <= k; j++) {
            if(!memo[j] && memo[j - a[i]]) memo[j] = 1;
        }
    }

    for(int i = k; i >= 0; i--) {
        if(memo[i]) {
            cout << i << endl;
            return;
        }
    }
}

int main() {
    IOS

    cin >> t;
    while(t--)
        solve();

    return 0;
}