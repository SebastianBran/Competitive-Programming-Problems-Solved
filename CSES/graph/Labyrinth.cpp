#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

const int MAXN = 1e3, MAXM = 1e3;
int n, m;
char g[MAXN][MAXM];
bool vis[MAXN][MAXM];
map<pair<int, int>, char> dir; 
map<pair<int, int>, pair<int, int>> parent;
pair<int, int> start;
// vector<char> path;
deque<char> path;

void bfs() {
  queue<pair<int, int>> q;
  q.push(start);
  vis[start.first][start.second] = true;
  parent[start] = { -1, -1 };
  dir[start] = 'A';
  vector<pair<int, int>> d = { { -1, 0}, { 1, 0 }, { 0, 1 }, { 0, -1 } };
  
  while (!q.empty()) {
    pair<int, int> curr = q.front();
    q.pop();

    for (auto it : d) {
      char d;
      if (it == make_pair(-1, 0)) d = 'U';
      if (it == make_pair(1, 0)) d = 'D';
      if (it == make_pair(0, 1)) d = 'R';
      if (it == make_pair(0, -1)) d = 'L';

      int x = curr.first + it.first;
      int y = curr.second + it.second;
      
      if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && g[x][y] != '#') {
        vis[x][y] = true;
        dir[{x, y}] = d;
        parent[{x, y}] = curr;
        q.push({x, y});

        if (g[x][y] == 'B') {
          d = dir[{x, y}];
          while (d != 'A') {
            // path.push_back(d);
            path.push_front(d);
            pair<int, int> aux = parent[{x, y}];
            x = aux.first;
            y = aux.second;
            d = dir[{x, y}];
          }
          // reverse(path.begin(), path.end());
          return;
        }
      }
    }
  }
}

void solve() {
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> g[i][j];
      if (g[i][j] == 'A') start = { i, j };
    }
  }

  bfs();

  if (path.size() == 0) cout << "NO" << endl;
  else {
    cout << "YES" << endl;
    cout << path.size() << endl;
    for (auto it : path) cout << it;
    cout << endl;
  }
}

int main() {
  IOS
  solve();
  return 0;
}