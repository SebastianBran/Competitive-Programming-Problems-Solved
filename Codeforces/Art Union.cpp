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

int n, m;

void solve() {
    cin >> m >> n;

    vector<vector<int>> a(m, vector<int>(n));

    fore (i, 0, m) {
        fore (j, 0, n) {
            cin >> a[i][j];
        }
    }

    vector<int> dp(m, 0);

    fore (i, 0, n) {
        int aux = 0;
        fore (j, 0, m) {
            dp[j] = max(aux, dp[j]) + a[j][i]; //verifico que los pintores no se crucen y añado el tiempo que toma pintar
            aux = dp[j];
        }
    }

    for (auto it : dp) cout << it << " ";
}

int main(){
    IOS

    solve();

    return 0;
}