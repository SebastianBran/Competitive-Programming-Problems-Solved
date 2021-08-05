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
ll mod = 1e9 + 7;

void solve() {
    cin >> n;

    vll dp(n + 1, 0);
    dp[0] = 1;

    fore (i,1,n + 1) {
        for (int j = 1; j <= 6 && i - j >= 0; j++) {
            (dp[i] += dp[i - j]) %= mod;
        }
    } 
    
    cout << dp[n];
}

int main(){
    IOS

    solve();    

    return 0;
}