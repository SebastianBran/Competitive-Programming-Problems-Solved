#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int n, m;

void solve() {
    cin >> n >> m;

    vector<long long> a(n + 1, 0);
    vector<int> b(m);
    for(auto &it : b) cin >> it;

    a[0] = 1;
    for(int i = 0; i < m; i++) {
        for(int j = b[i]; j < n + 1; j++) {
            a[j] += a[j - b[i]];
        }
    }

    cout << a[n];
}

int main() {
    IOS

    solve();

    return 0;
}