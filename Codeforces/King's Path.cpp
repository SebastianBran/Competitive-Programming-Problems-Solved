#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

pair<int, int> s, f;
int n, r, a, b;
map<pair<int, int>, int> m;
vector<pair<int, int>> dir = { {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1} };

void bfs() {
  queue<pair<int, int>> q;
  q.push(s);
  m[s] = 0;

  while (!q.empty()) {
    pair<int, int> curr = q.front();
    q.pop();

    for (auto it : dir) {
      pair<int, int> to = { curr.first + it.first, curr.second + it.second };
      if (m[to] == -1) {
        m[to] = m[curr] + 1;
        q.push(to);
      }
    }
  }
}

void solve() {
  cin >> s.first >> s.second >> f.first >> f.second;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> r >> a >> b;
    for (int i = a; i <= b; i++) {
      m[make_pair(r, i)] = -1;
    }
  }

  bfs();

  cout << m[f];
}

int main() {
  IOS
  solve();
  return 0;
}