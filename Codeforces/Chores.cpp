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

int n, a, b;

void solve() {
    cin >> n >> a >> b;

    vi v(n);

    fore (i, 0, n) cin >> v[i];

    ordenar(v);

    if (v[b] != v[b - 1]) cout << v[b] - v[b - 1] << endl;
    else cout << "0" << endl;
}

int main(){
    IOS

    solve();

    return 0;
}