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

int t, n;

void solve() {
    cin >> n;

    vi a(n);
    vector<bool> vis(n + 1, false);
    map<int, int> pos;
    fore(i,0,n) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    vi ans;
    for(int i = n; i > 0; i--) {
        int j = pos[i];
        while(j < n && !vis[a[j]]) {
            ans.pb(a[j]);
            vis[a[j]] = true;
            j++;
        }
    }

    for(auto it : ans) cout << it << " ";
    cout << endl;
}

int main() {
    IOS

    cin >> t;

    while(t--)
        solve();    

    return 0;
}
