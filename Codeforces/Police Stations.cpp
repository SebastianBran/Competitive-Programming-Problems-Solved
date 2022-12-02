#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int n, k, d;

vector<int> bfs(vector<vector<pair<int, int>>> &g, vector<int> &p) {
  int len = g.size();
  vector<bool> vis(len, false);
  vector<int> ans;
  queue<pair<int, int>> q;

  for (auto it : p) {
    q.push({ it, 0 });
  }

  while (!q.empty()) {
    pair<int, int> curr = q.front();
    q.pop();
    int node = curr.first;
    int from = curr.second;

    if (vis[node]) continue;
    vis[node] = true;

    for (auto child : g[node]) {
      int child_node = child.first;
      int child_from = child.second;

      if (child_node == from) continue;

      if (!vis[child_node]) q.push({ child_node, node });
      else ans.push_back(child_from);
    }
  }

  return ans;
}

void solve() {
  cin >> n >> k >> d;

  vector<int> p(k);

  for (int i = 0; i < k; i++) {
    cin >> p[i];
  }

  vector<vector<pair<int, int>>> g(n + 1);

  int a, b;
  for (int i = 1; i < n; i++) {
    cin >> a >> b;
    g[a].push_back({ b, i });
    g[b].push_back({ a, i });
  }

  vector<int> ans = bfs(g, p);

  cout << ans.size() << endl;
  for (auto it : ans) cout << it << " ";
}

int main() {
  IOS
  solve();
  return 0;
}