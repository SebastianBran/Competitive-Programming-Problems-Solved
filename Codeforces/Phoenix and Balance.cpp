#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int t, n;
vector<int> squares;

void pre() {
    for (int i = 1; i <= 30; i++) {
        squares.push_back(1 << i);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    pre();

    cin >> t;

    while (t--) {
        cin >> n;

        int a = squares[n - 1];
        for (int i = 0; i < (n / 2) - 1; i++) {
            a += squares[i];
        }       

        int b = 0;
        for (int i = (n / 2) - 1; i < n - 1; i++) {
            b += squares[i];
        }

        cout << abs(a - b) << endl;
    }
    return 0;
}