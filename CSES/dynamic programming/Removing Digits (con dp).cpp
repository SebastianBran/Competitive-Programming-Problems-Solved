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

void solve() {
    cin >> n;

    vi dp(n + 1, 1e6 + 1);
    dp[n] = 0;

    string s;
    for(int i = n; i >= 0; i--) {
        s = to_string(i);
        fore(j,0,sz(s)) {
            if(i - (s[j] - '0') >= 0) dp[i - (s[j] - '0')] = min(dp[i - (s[j] - '0')], dp[i] + 1);
        }
    }

    cout << dp[0];
}

int main(){
    IOS

    solve();    

    return 0;
}