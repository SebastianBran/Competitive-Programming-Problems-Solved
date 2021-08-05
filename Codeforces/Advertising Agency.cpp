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

ll t, n, k;
const int mod = 1e9 +7;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    cin >> n >> k;

    vi a(n);

    fore (i,0,n) cin >> a[i];

    sort(all(a), [&](int a, int b) {
        return a > b;
    });

    ll need = count(a.begin(), a.begin() + k, a[k - 1]);
    ll have = count(all(a), a[k - 1]);

    ll dif = have - need;
    ll maxi = max(dif, need);
    ll mini = min(dif, need);

    vll vi;
    forell (i, maxi + 1, have + 1) vi.pb(i);

    forell (j, 2ll, mini + 1) {
        ll aux = j;
        fore (i, 0, sz(vi)) {
            if (aux != 1) {
                ll div = gcd(aux, vi[i]);
                aux /= div;
                vi[i] /= div;
            }
            else break;
        }
    }

    ll comb = 1;
    fore (i, 0, sz(vi)) comb = (comb * vi[i]) % mod;

    cout << comb << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }

    return 0;
}