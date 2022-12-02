#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n;
string s;

vector<vector<int>> reverseGraph(vector<vector<int>>& g) {
  int len = g.size();
  vector<vector<int>> ng(len);

  for (int i = 0; i < len; i++)
    for (auto j : g[i])
      ng[j].push_back(i);

  return ng;
}

void dfs(vector<vector<int>>& g, int start, vector<int>& ord, vector<bool>& vis) {
  vis[start] = true;
  for (auto it : g[start])
    if (!vis[it])
      dfs(g, it, ord, vis);
  ord.push_back(start);
}

int kosaraju(vector<vector<int>>& g) {
  int len = g.size();
  vector<bool> vis(len, false);
  vector<int> ord;

  vector<vector<int>> gr = reverseGraph(g);

  for (int i = 0; i < len; i++)
    if (!vis[i])
      dfs(gr, i, ord, vis);

  vis = vector<bool>(len, false);
  vector<vector<int>> scc;
  reverse(ord.begin(), ord.end());

  for (auto node : ord) {
    if (!vis[node]) {
      vector<int> cc;
      dfs(g, node, cc, vis);
      scc.push_back(cc);
    }
  }

  return scc.size();
}

void solve() {
  cin >> n;
  vector<vector<int>> g(n);

  for (int i = 0; i < n; i++) {
    cin >> s;
    for (int j = 0; j < s.size(); j++) {
      if (s[j] == 'Y') {
        g[i].push_back(j);
      }
    }
  }

  cout << kosaraju(g) << endl;
}

int main() {
  IOS
  cin >> t;

  while (t--) 
    solve();
  return 0;
}