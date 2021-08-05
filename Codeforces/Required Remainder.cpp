#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int t, x, y, n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;

    while (t--) {
        cin >> x >> y >> n;

        int aux = x * (n / x);

        if (aux + y <= n) cout << aux + y << endl;
        else cout << aux - x + y << endl;
    }

    return 0;
}