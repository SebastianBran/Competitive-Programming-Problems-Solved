#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int t, a, b;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;
    
    while(t--) {
        cin >> a >> b;

        int sq = a * b;

        if (sq & 1) cout << (sq / 2) + 1 << endl;
        else cout << sq / 2 << endl; 
    }

    return 0;
}