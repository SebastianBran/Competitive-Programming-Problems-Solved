#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n, k, a, b;
string w;

void solve() {
  cin >> n >> k;

  map<int, vector<int>> m;
  int aux;

  for (int i = 0; i < n; i++) {
    cin >> aux;
    m[aux].push_back(i);
  }

  for (int i = 0; i < k; i++) {
    cin >> a >> b;

    if (!m.count(a) || !m.count(b)) cout << "NO" << endl;
    else {
      int l = m[a][0];
      auto r = lower_bound(m[b].begin(), m[b].end(), l);
      
      if (r != m[b].end() && (*r > l)) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
  }
}

int main() {
  IOS
  cin >> t;
  while (t--) {
    getline(cin, w);
    solve();
  }
  return 0;
}