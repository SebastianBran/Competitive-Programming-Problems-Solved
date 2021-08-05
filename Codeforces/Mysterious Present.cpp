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
 
int n, w, h;
 
struct envelop {
    int w, h, pos;
};
 
void solve() {
    cin >> n >> w >> h;
 
    vector<envelop> v(n);
 
    fore (i, 0, n) {
        cin >> v[i].w >> v[i].h;
        v[i].pos = i + 1;
    }
 
    sort(all(v), [&](envelop& a, envelop& b) {
        return ((ll)a.w * (ll)a.h) < ((ll)b.w * (ll)b.h);
    });
 
    vector<int> dp(n, 0);
    vector<int> path(n, -1);
 
    fore (i, 0, n) {
        if (v[i].w > w && v[i].h > h) { 
            dp[i] = 1;
            fore (j, 0, i) {
                if (v[j].w < v[i].w && v[j].h < v[i].h) { 
                    if (dp[i] < dp[j] + 1) {
                        dp[i] = dp[j] + 1;
                        path[i] = j;
                    }
                }
            }
        }
    }
 
    vector<int> ans;
    int pos = max_element(all(dp)) - dp.begin();
 
    while (pos != -1 && dp[pos] != 0) {
        ans.pb(v[pos].pos);
        pos = path[pos];
    }
 
    reverse(all(ans));
 
    cout << ans.size() << endl;
    for (auto it : ans) cout << it << " ";
}
 
int main() {
    IOS
 
    solve();
 
   return 0;
}