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

int t, n, m, k;

void solve() {
    cin >> n >> m >> k;

    vii a(k);

    fore(i,0,k) cin >> a[i].first;
    fore(i,0,k) cin >> a[i].second;

    map<int,set<int>> mp1, mp2;

    fore(i,0,k) {
        mp1[a[i].first].insert(a[i].second);
        mp2[a[i].second].insert(a[i].first);
    }

    ll ans = 0;
    fore (i, 1, n + 1) {
        if (mp1.count(i)) {
            for (auto it : mp1[i]) {
                ans += ((ll)(k - mp1[i].size()) - (ll)(mp2[it].size() - 1));
            }
        }
    }
    cout << ans / 2 << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }

    return 0;
}