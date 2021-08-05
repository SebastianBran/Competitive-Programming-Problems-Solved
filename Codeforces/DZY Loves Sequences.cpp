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
 
int n;
 
void solve() {
    cin >> n;
 
    vi a(n), dp1(n), dp2(n);
 
    fore (i, 0, n) cin >> a[i];
 
    dp1[0] = 1;
    dp2[n - 1] = 1;
 
    fore (i, 1, n) {
        if (a[i] > a[i - 1]) dp1[i] = 1 + dp1[i - 1];
        else dp1[i] = 1;
    } 
 
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) dp2[i] = 1 + dp2[i + 1];
        else dp2[i] = 1;
    }
 
    int ans = 1;

    if (n == 1) {
        cout << ans << endl;
        return;
    }

    fore (i, 0, n) {
        if (i == 0) ans = max(ans, dp2[i + 1] + 1);
        else if (i == n - 1) ans = max(ans, dp1[i - 1] + 1);
        else if (a[i - 1] + 1 < a[i + 1]) ans = max(ans, dp1[i - 1] + dp2[i + 1] + 1);
        else {
            if (a[i - 1] >= a[i]) ans = max(ans, dp1[i - 1] + 1);
            if (a[i + 1] <= a[i]) ans = max(ans, dp2[i + 1] + 1);
        }
    }
 
    cout << ans << endl;
}
 
int main() {
    IOS
 
    solve();
 
    return 0;
}