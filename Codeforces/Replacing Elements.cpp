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

int t, n, d;

void solve() {
    cin >> n >> d;

    vi a(n);
    fore(i,0,n) cin >> a[i];

    ordenar(a);

    auto it = lower_bound(all(a), d + 1);

    if (it == a.end()) cout << "YES" << endl;
    else {
        if (a[0] + a[1] <= d) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){
    IOS

    cin >> t;

    while (t--)
        solve();    

    return 0;
}