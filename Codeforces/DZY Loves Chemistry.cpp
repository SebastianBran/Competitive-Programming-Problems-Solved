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

const int MAXN = 51;
int n, m;
vector<vi> g(MAXN);
vector<bool> vis(MAXN, false);

void dfs(int i) {
    vis[i] = true;
    for (auto it : g[i]) {
        if (!vis[it]) {
            dfs(it);
        }
    }
}

void solve() {
    cin >> n >> m;

    int x, y;
    fore (i, 0, m) {
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    int cont = 0;
    fore (i, 1, n + 1) {
        if (!vis[i]) {
            cont++;
            dfs(i);
        }
    }

    cout << (1LL << (n - cont)) << endl;
}   

int main(){
    IOS

    solve();

    return 0;
}