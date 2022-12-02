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

const int MAXN = 1e5 + 1;
vi primes;
vi G[MAXN];
int dis[MAXN];
int computers[MAXN];
bool vis[MAXN][2];
int n, m, s, t;

void criba() {
    bool isPrime[2 * MAXN];
    memset(isPrime, true, sizeof(isPrime));

    for (ll i = 4; i <= (2 * MAXN) - 1; i += 2) isPrime[i] = false;

    for (ll i = 3; i <= (2 * MAXN) - 1; i++) {
        if (isPrime[i]) {
            primes.pb(i);
            for (ll j = i * i; j <= (2 * MAXN) - 1; j += 2 * i) {
                isPrime[j] = false;
            }
        }
    }
}

int bfs(int s) {
    queue<int> q;
    q.push(s);
    vis[s][computers[s] ^ 1] = true;
    computers[s] ^= 1;
    dis[s] = 0;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int i = 0; i < G[curr].size(); i++) {
            int to = G[curr][i];

            if (!vis[to][computers[to] ^ 1]) {
                vis[to][computers[to] ^ 1] = true;

                cout << curr << " " << to << " " << computers[to] << " " << dis[curr] + 1 << " <---" << endl;

                if (dis[to] == -1 || dis[curr] + 1 == 2)
                    dis[to] = dis[curr] + 1;
                
                computers[to] ^= 1;

                q.push(G[curr][i]);
            }
        }
    }

    return dis[t];
}

int bs(int x) {
    int l = 0, r = primes.size() - 1;
    int mit;


    while (l < r) {
        mit = l + (r - l) / 2;

        if (primes[mit] < x) l = mit + 1;
        else r = mit;
    }

    return primes[l];
}

void solve() {
    memset(vis, false, MAXN);
    memset(dis, -1, sizeof(dis));
    memset(computers, 0, sizeof(computers));

    cin >> n >> m >> s >> t;

    int a, b;
    fore (i, 0, m) {
        cin >> a >> b;
        G[a].pb(b);
        G[b].pb(a);
    }

    int res = bfs(s);
    if (res == -1 || (res != 2 && res % 2 == 0)) cout << -1 << endl;
    else if (res == 2) cout << 2 << endl;
    else cout << bs(res) << endl;
}

int main() {
    IOS

    criba();
    solve();

    return 0;
}