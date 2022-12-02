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

int n, k;

void solve() {
    cin >> n >> k;

    vll dp(n + 1);
    ll aux;

    dp[0] = 0;

    fore (i, 1, n + 1) {
        cin >> aux;
        dp[i] = aux + dp[i - 1];
    }

    ll sum_max, p1, p2, p3, maxi, curr;

    p1 = 1, p3 = 1, p2 = k + 1;
    sum_max = (dp[k] - dp[0]) + (dp[2 * k] - dp[k]);
    maxi = (dp[k] - dp[0]);

    fore (i, 2 * k + 1, n + 1) {
        curr = dp[i - k] - dp[i - 2 * k]; //el segmento que sigue del maxi
        if (curr > maxi) {
            maxi = curr;
            p3 = i - 2 * k + 1;
        }
        if (sum_max < maxi + (dp[i] - dp[i - k])) {
            sum_max = maxi + (dp[i] - dp[i - k]);
            p1 = p3;
            p2 = i - k + 1;
        }
    }

    cout << p1 << " " << p2 << endl;
}

int main() {
    IOS

    solve();

    return 0;
}