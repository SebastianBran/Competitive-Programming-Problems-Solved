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

int n, d;

ll solve(vii& v) {
    ll maxi = -1;

    vll sum;

    sum.pb(0LL);
    fore (i, 0, v.size()) sum.pb((ll)v[i].second + (ll)sum[i]);

    fore (i, 0, v.size()) {
        int ini = i;
        int l = ini;
        int r = v.size() - 1;
        int mit;

        while (l < r) {
            mit = l + (r - l + 1) / 2;
            if (v[mit].first - v[ini].first <= d - 1) l = mit;
            else r = mit - 1;
        }

        maxi = max(maxi, sum[l + 1] - sum[ini]);
    }

    return maxi;
}

int main(){
    IOS

    cin >> n >> d;

    vii v(n);

    fore (i, 0, n) {
        cin >> v[i].first >> v[i].second;
    }

    ordenar(v);

    cout << solve(v);

    return 0;
}