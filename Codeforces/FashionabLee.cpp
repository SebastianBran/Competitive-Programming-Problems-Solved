#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int t, n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;

    while (t--) {
        cin >> n;

        if (n % 4 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    

    return 0;
}