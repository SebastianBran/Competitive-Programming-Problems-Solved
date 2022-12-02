#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int n, m;

int bfs(vector<vector<int>> &g, vector<int> &c, vector<bool> &vis) {
  queue<int> q;
  vis[0] = true;
  q.push(0);
  int cont = 0;

  while (!q.empty()) {
    int curr = q.front();
    q.pop();

    bool have = false;
    if (c[curr] > m) continue;
    else {
      for (auto it : g[curr]) {
        if (!vis[it]) {
          if (c[curr] >= 1 && c[it] >= 1) 
            c[it] += c[curr];
          vis[it] = true;
          q.push(it);
          have = true;
        }
      }
    }
    if (c[curr] <= m && !have) cont++;
  }

  return cont;
}

void solve() {
  cin >> n >> m;

  vector<int> c(n);
  vector<bool> vis(n, false);
  vector<vector<int>> g(n);

  for (auto &it : c) cin >> it;

  int a, b;
  for (int i = 0; i < n - 1; i++) {
    cin >> a >> b;
    g[a - 1].push_back(b - 1);
    g[b - 1].push_back(a - 1);
  }

  cout << bfs(g, c, vis);
}

int main() {
  IOS
  solve();
  return 0;
}