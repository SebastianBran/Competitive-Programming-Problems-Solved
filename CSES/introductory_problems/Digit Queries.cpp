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

int q;
ll k;
vll a;

void pre() {
    for(ll i = 0, j = 9, k = 1; i < 1e18; i += j * k, j *= 10, k++) {
        a.pb(i);
    }
}

ll pw(ll a, ll b) {
    ll t = 1;
    fore(i,0,b) t *= a;
    return t; 
}

void solve() {
    pre();

    cin >> q;

    // int cont = 0;
    // for (auto it : a) cout << it << " " << cont++ << endl;

    while(q--) {
        cin >> k;

        ll pos = (lower_bound(all(a), k)) - a.begin();

        if (pos > 1) {
            // cout << pos << endl;
            // k -= pow((ll)10, (ll)pos - 1);
            k -= (a[pos - 1] + 1);

            ll num = pw((ll)10, (ll)pos - 1) + k / pos;
            string s = to_string(num);  

            cout << s[k % pos] << endl;
        } else cout << k << endl;
    }
}

int main(){
    IOS

    solve();    

    return 0;
}