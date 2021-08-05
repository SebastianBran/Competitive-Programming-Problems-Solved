#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int t, n;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;

    int aux = 1;
    int level = 0;
    while (aux <= n) {
        n -= aux;
        level++;
        aux += (level + 1);
    }

    cout << level << endl;

    return 0;
}