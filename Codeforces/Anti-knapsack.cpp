#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int t, n, k;

void solve() {
    cin >> n >> k;

    int cant = (n - k) + (k - ((k - 1) / 2 + 1));

    cout << cant << endl;
    for(int i = (k - 1) / 2 + 1; i < k; i++) cout << i << " ";
    for(int i = k + 1; i <= n; i++) cout << i << " ";
    if(cant != 0) cout << endl;
}

int main() {
    IOS

    cin >> t;
    while(t--)
        solve();

    return 0;
}