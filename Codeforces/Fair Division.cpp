#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

int t, n;

void solve() {
    cin >> n;

    // vi a(n);
    int aux;
    int c1 = 0, c2 = 0;
    fore(i,0,n) {
        cin >> aux;

        if (aux == 1) c1++;
        else c2++;
    }

    if (c2 % 2 == 0) {
        if (c1 % 2 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    else {
        c1 -= 2;
        if (c1 >= 0 && c1 % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }

    return 0;
}