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

int t, n;
double k;

void solve() {
    cin >> n >> k;

    vector<double> a(n);

    fore (i,0,n) cin >> a[i];

    ll t = 0;
    ll mini = 0;
    fore (i,0,n - 1) {
        t += a[i];
        ll aux = ceil((a[i + 1] * (double)100) / (double)k);
        if (t < aux) {
            mini += (aux - t);
            t += (aux - t);
        }
    }

    cout << mini << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) 
        solve();    

    return 0;
}