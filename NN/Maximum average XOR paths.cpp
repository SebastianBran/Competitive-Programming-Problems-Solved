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
vii G[MAXN];
set<int> specials;
bool vis[MAXN];
int w[MAXN];
int d[MAXN];
int n, m, k;

double bfs(int ini) {
    queue<int> q;
    q.push(ini);
    vis[ini] = true;
    d[ini] = 0;
    w[ini] = 0;

    vector<double> distances;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (auto it : G[curr]) {
            if (!vis[it.first]) {
                vis[it.first] = true;
                d[it.first] = d[curr] + 1;
                w[it.first] = w[curr] ^ it.second;

                if (specials.count(it.first)) {
                    distances.push_back(double(w[it.first]) / double(d[it.first]));
                }

                q.push(it.first);
            }
        }
    }

    double maxi = -1;
    for (auto it : distances) maxi = max(maxi, it);

    return maxi;
}

void solve() {
    cin >> n >> m >> k;

    int aux, a, b, we, q;

    fore (i, 0, k) {
        cin >> aux;
        specials.insert(aux);
    }

    fore (i, 0, m) {
        cin >> a >> b >> we;
        G[a].push_back({b, we});
        G[b].push_back({a, we});
    }

    cin >> q;

    fore (i, 0, q) {
        cin >> aux;

        memset(w, 0, MAXN);
        memset(d, 0, MAXN);
        memset(vis, false, MAXN);

        double res = bfs(aux);
        if (res == -1) cout << "unreachable" << endl;
        else {
            cout << fixed << setprecision(6);
            cout << res << endl;
        }
    }
}

int main() {
    IOS

    solve();

    return 0;
}