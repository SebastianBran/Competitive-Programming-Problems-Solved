#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

ll n, aux;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    cin >> n;

    vector<ll> a(n);

    fore(i,0,n) cin >> a[i];

    ordenar(a);

    int maxi = a[n - 1];

    ll sum = 0;

    fore(i,0,n) sum += a[i];

    ll comon = maxi - a[0];
    fore(i,1,n) {
        comon = gcd(comon, maxi - a[i]);
    }

    cout << (maxi * n - sum) / comon << " " << comon << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}