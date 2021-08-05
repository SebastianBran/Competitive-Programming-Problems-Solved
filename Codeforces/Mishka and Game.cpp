#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int t, a, b;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;

    int cont1 = 0, cont2 = 0;
    while (t--) {
        cin >> a >> b;

        if (a > b) cont1++;
        else if (a < b) cont2++;
    }

    if (cont1 == cont2) cout << "Friendship is magic!^^" << endl;
    else if (cont1 > cont2) cout << "Mishka" << endl;
    else cout << "Chris" << endl;

    return 0;
}