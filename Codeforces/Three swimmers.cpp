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

int t;
ll p, a, b, c;

void solve() {
    cin >> p >> a >> b >> c;

    ll x = (a - p % a) % a;
    ll y = (b - p % b) % b;
    ll z = (c - p % c) % c;
    
    cout << min({x, y, z}) << endl;
}

int main() {
    IOS

    cin >> t;

    while(t--)
        solve();    

    return 0;
}
