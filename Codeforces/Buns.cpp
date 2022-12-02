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

int n, m, c, d;

void solve() {
    cin >> n >> m >> c >> d;

    vll dp(n + 1, 0), v1(m), v2(m), v3(m), v4(m);

    fore (i, 0, m) {
        cin >> v1[i] >> v2[i] >> v3[i] >> v4[i];
    }
    
    fore (i, 0, (n / c) + 1) {
        for (int j = n - c * i; j >= 0; j--) {
            dp[j + c * i] = max(dp[j + c * i], dp[j] + d * i);
        }
    }

    fore (i, 0, m) {
        for (int j = n; j >= 0; j--) {
            fore (k, 0, min((n / v3[i]) + 1, (v1[i] / v2[i]) + 1)) {
                if (j + v3[i] * k <= n) {
                    dp[j + v3[i] * k] = max(dp[j + v3[i] * k], dp[j] + v4[i] * k);
                }
            }
        }
    }

    cout << dp[n];
}

int main() {
    IOS

    solve();

    return 0;
}