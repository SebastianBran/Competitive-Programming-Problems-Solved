#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int n, x;

vector<int> dfs(vector<vector<int>> &g, int s) {
  int len = g.size();
  vector<int> vis(len, false);
  vector<int> dis(len, -1);
  stack<int> st;

  dis[s] = 0;
  st.push(s);

  while (!st.empty()) {
    int curr = st.top();
    st.pop();

    if (!vis[curr]) {
      vis[curr] = true;
    }

    for (int child : g[curr]) {
      if (!vis[child]) {
        dis[child] = dis[curr] + 1;
        st.push(child);
      }
    }
  }

  return dis;
}

void solve() {
  cin >> n >> x;

  vector<vector<int>> g(n);

  int a, b;
  for (int i = 0; i < n - 1; i++) {
    cin >> a >> b;
    a--; b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<int> disA = dfs(g, 0);
  vector<int> disB = dfs(g, x - 1);

  long long ans = 0;
  for (int i = 0; i < n; i++) {
    if (disB[i] < disA[i]) {
      ans = max(ans, (long long)disA[i]);
    }
  }

  cout << ans * 2LL;
}

int main() {
  IOS
  solve();
  return 0;
}