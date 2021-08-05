#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

int n, m;
vector<set<int>> g;

void solve() {
    cin >> n >> m;

    g.resize(n + 1);

    int a, b;
    fore(i,0,m) {
        cin >> a >> b;
        g[a].insert(b);
        g[b].insert(a);
    }

    int ok;
    int ans = 0;

    while (true) {
        vi a;
        ok = true;

        for (int i = 1; i < g.size(); i++) {
            if (g[i].size() == 1) {
                a.pb(i);
                ok = false;
            }
        }

        if (ok) break;
        ans++;

        for (auto it : a) {
            for (int i = 1; i < g.size(); i++) {
                g[i].erase(it);
            }
            g[it].clear();
        }
    }

    cout << ans;
}

int main(){
    IOS

    solve();    

    return 0;
}