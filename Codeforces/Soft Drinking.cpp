#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int n, k, l, c, d, p, nl, np;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int c1 = (k * l) / nl;
    int c2 = (c * d);
    int c3 = p / np;

    cout << min({c1, c2, c3}) / n << endl;

    return 0;
}