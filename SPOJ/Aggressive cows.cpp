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

int t, n, c;

bool check(vll& v, ll dis) {
    ll curr;
    int cont = 0, pos = 0;

    while (pos != n) {
        curr = v[pos] + dis;
        pos = lower_bound(all(v), curr) - v.begin();
        cont++;
    }

    return cont >= c;
}

ll bs(vll& v) {
    ll l = 1, r = 1e9;

    while (l < r) {
        ll mit = l + (r - l + 1) / 2;
        if (check(v, mit)) l = mit;
        else r = mit - 1;
    }

    return l;
}

void solve() {
    cin >> n >> c;

    vll v(n);

    fore (i, 0, n) cin >> v[i];

    ordenar(v);

    cout << bs(v) << endl;
}

int main() {
    IOS

    cin >> t;
    
    while (t--)
        solve();

    return 0;
}