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

int n, k;
ll a, b;
vi v;

ll cant(ll l, ll r) {
    ll x = lower_bound(all(v), l) - v.begin();
    ll y = upper_bound(all(v), r) - v.begin() - 1LL;
    return y - x + 1;
}

ll solve(ll l, ll r) {
    ll num = cant(l, r);
    
    ll aux;
    if (num == 0) aux = a;
    else aux = b * num * (r - l + 1);

    if (l == r || num == 0) return aux;

    ll mit = l + (r - l) / 2;
    return min(aux, solve(l, mit) + solve(mit + 1, r));
}

int main() {
    IOS

    cin >> n >> k >> a >> b;

    int aux;
    fore (i, 0, k) {
        cin >> aux;
        v.pb(aux);
    }

    ordenar(v);

    cout << solve(1, (1LL << n)) << endl;

    return 0;
}