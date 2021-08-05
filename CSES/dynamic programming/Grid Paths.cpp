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
const int mod = 1e9 + 7;

void solve() {
    cin >> n;

    char a[n][n];
    int dp[n][n];

    fore (i,0,n) 
        fore (j,0,n)
            cin >> a[i][j];
    
    if (a[0][0] == '.') dp[0][0] = 1;
    else dp[0][0] = 0;
    fore (i,1,n) {
        if (a[0][i] == '*') dp[0][i] = 0;
        else dp[0][i] = dp[0][i - 1];

        if (a[i][0] == '*') dp[i][0] = 0;
        else dp[i][0] = dp[i - 1][0];
    }

    fore (i,1,n) {
        fore (j,1,n) {
            if (a[i][j] == '*') dp[i][j] = 0;
            else dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }
    }

    cout << dp[n - 1][n - 1] << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}