#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int t, n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;
    
    while(t--) {
        cin >> n;

        if (n & 1) cout << (n / 2) + 1 << endl;
        else cout << n / 2 << endl;
    }

    return 0;
}