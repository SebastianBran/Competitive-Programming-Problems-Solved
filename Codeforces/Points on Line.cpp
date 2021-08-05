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

int n, d;

void solve() {
    vi a(n);

    fore (i, 0, n) cin >> a[i];

    ll ans = 0;
    int i = 0, j = 2;

    while (i < n - 2 && j <= n) {
        while (j < n && a[j] - a[i] <= d) j++;
        ll dis = j - i - 1;
        ans += (dis) * (dis - 1) / 2;
        i++;
    }

    cout << ans << endl;
}

int main(){
    IOS

    cin >> n >> d;

    solve();

    return 0;
}