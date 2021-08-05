#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;

    cout << (n / 2) << endl;

    if (n & 1) {
        for (int i = 0; i < (n / 2) - 1; i++) cout << 2 << " ";
        cout << "3";
    }
    else {
        for (int i = 0; i < n / 2; i++) cout << 2 << " ";
    }

    return 0;
}