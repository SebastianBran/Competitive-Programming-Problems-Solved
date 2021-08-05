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

void solve() {
    cin >> n;

    vi x(n), y(n);
    fore(i,0,n) cin >> x[i] >> y[i];

    ordenar(x);
    ordenar(y);

    ll a = x[n / 2] - x[(n - 1) / 2] + 1;
    ll b = y[n / 2] - y[(n - 1) / 2] + 1;
    cout << a * b << endl;
}

int main(){
    IOS

    cin >> t;
    
    while(t--)
        solve();    

    return 0;
}