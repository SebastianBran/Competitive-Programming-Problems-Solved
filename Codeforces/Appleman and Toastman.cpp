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

int n;

void solve() {
    cin >> n;

    vll a(n);
    fore (i, 0, n) cin >> a[i];

    ordenar(a);

    vll sum(n + 1);
    sum[0] = 0;
    fore (i, 0, n) sum[i + 1] = a[i] + sum[i];

    ll ans = 0;
    fore (i, 0, n) {
        if (i == 0) ans += sum[n] - sum[i];
        else {
            ans += sum[i] - sum[i - 1];
            ans += sum[n] - sum[i];
        }
    }

    cout << ans << endl;
}

int main(){
    IOS

    solve();

    return 0;
}