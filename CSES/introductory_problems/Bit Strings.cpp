#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(ll i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()

ll n;

ll pw (ll x, ll n) {
    ll t = 1;
    ll mod = 1e9 + 7;

    forell (i,0,n) t = (t * x) % mod;
    
    return t;
}

void solve() {
    cin >> n;
    cout << pw(2, n);
}

int main(){
    IOS

    solve();    

    return 0;
}