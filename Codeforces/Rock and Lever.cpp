#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int t, n;

void solve() {
    cin >> n;

    vi a(n);
    fore (i, 0, n) cin >> a[i];

    ll ans = 0;
    fore (i, 0, 31) {
        ll cont = 0;
        fore (j, 0, n) {
            if ((1 << (i + 1)) > a[j] && a[j] >= (1 << i)) cont++;
        }
        ans += (cont * (cont - 1)) / 2;
    }

    cout << ans << endl;
}

int main() {
    IOS

    cin >> t;
        
    while (t--) 
        solve();

    return 0;
}