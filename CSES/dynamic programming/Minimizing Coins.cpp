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

int n, x;
const int maxi = 1e7;

void solve() {
    cin >> n >> x;

    vi a(n), dp(x + 1);
    dp[0] = 0;
    fill(dp.begin() + 1, dp.end(), maxi);

    fore(i,0,n) cin >> a[i];

    fore(i,0,n) {
        fore(j,a[i],x + 1) {
            dp[j] = min(dp[j], dp[j - a[i]] + 1);
        }
    }

    if (dp[x] == maxi) cout << -1 << endl;
    else cout << dp[x] << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}