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
const int mod = 1e9 + 7;

void solve() {
    cin >> n >> x;

    vi a(n);

    fore(i,0,n) cin >> a[i];

    vi dp(x + 1, 0);
    dp[0] = 1;

    fore (i,1,x + 1) {
        fore(j,0,n) {
            if (a[j] <= i) {
                dp[i] = (dp[i] + dp[i - a[j]]) % mod;
            }
        }
    }

    cout << dp[x] << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}