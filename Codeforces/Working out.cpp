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
    cin >> n >> m;

    vector<vll> v(n, vll(m)), dp1(n + 2, vll(m + 2, 0)), dp2(n + 2, vll(m + 2, 0)), dp3(n + 2, vll(m + 2, 0)), dp4(n + 2, vll(m + 2, 0));

    fore (i, 0, n) {
        fore (j, 0, m) {
            cin >> v[i][j];
        }
    }

    fore (i, 1, n + 1) {
        fore (j, 1, m + 1) {
            dp1[i][j] = v[i - 1][j - 1] + max(dp1[i - 1][j], dp1[i][j - 1]);
        }
    }

    for (int i = n; i >= 1; i--) {
        for (int j = m; j >= 1; j--) {
            dp2[i][j] = v[i - 1][j - 1] + max(dp2[i + 1][j], dp2[i][j + 1]);
        }
    }

    for (int i = n; i >= 1; i--) {
        fore (j, 1, m + 1) {
            dp3[i][j] = v[i - 1][j - 1] + max(dp3[i + 1][j], dp3[i][j - 1]);
        }
    }

    fore (i, 1, n + 1) {
        for (int j = m; j >= 1; j--) {
            dp4[i][j] = v[i - 1][j - 1] + max(dp4[i - 1][j], dp4[i][j + 1]);
        }
    }

    ll ans = 0;
    fore (i, 2, n) {
        fore (j, 2, m) {
            ans = max(ans, max({ dp1[i][j - 1] + dp2[i][j + 1] + dp3[i + 1][j] + dp4[i - 1][j], 
                                 dp1[i - 1][j] + dp2[i + 1][j] + dp3[i][j - 1] + dp4[i][j + 1] }));
        }
    }

    cout << ans << endl;
}

int main() {
    IOS

    solve();

    return 0;
}