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

int n;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    cin >> n;

    vector<ll> a(n);

    fore(i,0,n) cin >> a[i];
    ordenar(a);

    ll g = a[n - 1];

    fore(i,0,n - 1) {
        g = gcd(g, a[i]);
    }

    ll sq = (ll)sqrt(g) + 1;
    int cont = 0;

    for (ll i = 1; i < sq; i++) {
        if (g % i == 0) {
            cont++;
            if (g / i != i) cont++;
        }    
    }
    
    cout << cont << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}