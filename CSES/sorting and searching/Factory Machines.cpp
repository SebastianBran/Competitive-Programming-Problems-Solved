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

int n;
ll t;

bool check(vll& a, ll time) {
    ll ans = 0;

    for (auto it : a) {
        ans += (time / it);
        if (ans >= t) return true;
    }

    return false;
}

ll bs(vll& a) {
    ll l = 0, r = 1e18 + 1;

    while (l < r) {
        ll mit = l + (r - l) / 2LL;
        if (check(a, mit)) r = mit;
        else l = mit + 1;
    }

    return l;
}

void solve() {
    cin >> n >> t;

    vll a(n);

    fore (i, 0, n) cin >> a[i];

    cout << bs(a);
}

int main(){
    IOS

    solve();

    return 0;
}