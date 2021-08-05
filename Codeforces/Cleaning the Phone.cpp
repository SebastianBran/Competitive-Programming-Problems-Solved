#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int t, n, m;

void solve() {
    cin >> n >> m;

    vi a(n), b, c;

    fore (i,0,n) cin >> a[i];
    int aux;
    fore (i,0,n) {
        cin >> aux;
        if (aux == 1) b.pb(a[i]);
        else c.pb(a[i]);
    }

    sort(all(b), [&](int a, int b) {
        return a > b;
    });
    
    sort(all(c), [&](int a, int b) {
        return a > b;
    });

    ll sumb = 0, sumc = 0;
    fore (i,0,sz(c)) sumc += c[i];

    int r = sz(c) - 1, ans = 1e9  + 7;
    fore (i, 0, sz(b) + 1) {
        while (r >= 0 && sumb + sumc - c[r] >= m) {
            sumc -= (ll)c[r];
            r--;
        }
        if (sumb + sumc >= m) ans = min(ans, 2 * (r + 1) + i);
        if (i != sz(b)) sumb += (ll)b[i];
    }

    if (ans == 1e9 + 7) cout << -1 << endl;
    else cout << ans << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }

    return 0;
}