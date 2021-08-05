#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

ll n, m;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    ll dif = (n - m);
    ll maxi = max(dif, m);
    ll mini = min(dif, m);

    vector<ll> a;

    for (ll i = maxi + 1; i < n + 1; i++) a.pb(i);

    for (ll j = 2; j < mini + 1; j++) {
        ll aux = j;
        fore (i, 0, a.size()) {
            if (aux != 1) {
                ll div = gcd(aux, a[i]);
                aux /= div;
                a[i] /= div;
            }
            else break;
        }
    }

    ll comb = 1;
    fore (i, 0, a.size()) {
        comb *= a[i];
    }

    cout << n << " things taken " << m << " at a time is " << comb << " exactly." << endl;
}

int main(){
    IOS

    while (cin >> n >> m) {
        if (n == 0 && m == 0) return 0;
        solve();    
    }

    return 0;
}