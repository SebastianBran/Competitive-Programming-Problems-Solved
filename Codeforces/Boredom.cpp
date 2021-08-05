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

const int MAXN = 1e5;
int n;

void solve() {
    cin >> n;

    ll aux;
    vll m(MAXN + 1, 0);
    vll dp(MAXN + 1);
    

    fore (i, 0, n) {
        cin >> aux;
        m[aux]++;
    }

    dp[0] = 0;
    dp[1] = 1 * m[1];
    fore (i, 2, MAXN + 1) 
        dp[i] = max({ dp[i - 1], dp[i - 2] + i * m[i] });
    
    cout << dp[MAXN] << endl;
}

int main(){
    IOS

    solve();

    return 0;
}