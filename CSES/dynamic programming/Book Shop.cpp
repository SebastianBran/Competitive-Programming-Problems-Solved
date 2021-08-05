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

int n;
ll k;

void solve() {
    cin >> n >> k;
    vector<pair<ll,ll>> a(n);

    fore (i,0,n) cin >> a[i].first;
    fore (i,0,n) cin >> a[i].second;

    vector<ll> dp(k + 1, 0);

    fore (i,0,n) {
        for (int j = k; j >= a[i].first; j--) {
            dp[j] = max(dp[j], dp[j - a[i].first] + a[i].second);
        }
    }

    cout << dp[k] << endl;
}

int main(){
    IOS
    
    solve();    

    return 0;
}