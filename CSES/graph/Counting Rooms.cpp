#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

const int MAXN = 1000, MAXM = 1000;
int n, m;
char g[MAXN][MAXM];
bool vis[MAXN][MAXM];

void go(int i, int j) {
  if (i < 0 || j < 0 || i >= n || j >= m || g[i][j] == '#' || vis[i][j]) return;
  vis[i][j] = true;
  go(i - 1, j);
  go(i + 1, j);
  go(i, j - 1);
  go(i, j + 1);
}

void solve() {
  cin >> n >> m;

  int cont = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> g[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (g[i][j] == '.' && !vis[i][j]) {
        cont++;
        go(i, j);
      }
    }
  }

  cout << cont << endl;
}

int main() {
  solve();
  return 0;
}