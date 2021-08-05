#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int n, k;


void solve() {
    cin >> n >> k;

    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    a[0] = k;

    int cont = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] + a[i - 1] < k) {
            int aux = (k - (a[i] + a[i - 1]));
            a[i] += aux;
            cont += aux;
        }
    }

    cout << cont << endl;
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
}

int main() {
    IOS

    solve();

    return 0;
}