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

pair<int, int> dir[8] = {{0, -1}, {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}};
pair<int, int> START, END;
int n, r, a, b;
map<pair<int, int>, int> G;

void bfs(pair<int, int>& ini) {
    queue<pair<int, int>> q;
    q.push(ini);
    G[ini] = 0;

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();
        fore (i, 0, 8) {
            pair<int, int> aux = make_pair(curr.first + dir[i].first, curr.second + dir[i].second);
            if (G[aux] == -1) {
                G[aux] = G[curr] + 1;
                q.push(aux);
            }
        }
    }
}

void solve() {
    cin >> START.first >> START.second >> END.first >> END.second;

    G[START] = -1;
    G[END] = -1;

    cin >> n;

    fore (i, 0, n) {
        cin >> r >> a >> b;

        fore (j, a, b + 1) {
            G[make_pair(r, j)] = -1;
        }
    }

    bfs(START);

    cout << G[END] << endl;
}

int main() {
    IOS

    solve();

    return 0;
}