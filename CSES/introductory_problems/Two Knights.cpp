#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

ll n;

void solve() {
    cin >> n;

    ll t, nt;

    for (ll i = 1; i <= n; i++) {
        t = (i * i) * (i * i - 1) / 2;
        nt = 4 * (i - 2) * (i - 1);
        cout << t - nt << endl;
    }
}

int main(){
    IOS

    solve();    

    return 0;
}