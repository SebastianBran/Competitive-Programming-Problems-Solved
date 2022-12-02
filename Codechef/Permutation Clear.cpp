#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n, k;

void solve() {
  cin >> n;

  vector<int> a(n);

  for (auto& it : a) {
    cin >> it;
  }

  cin >> k;

  set<int> s;
  int aux;

  for (int i = 0; i < k; i++) {
    cin >> aux;
    s.insert(aux);
  }

  for (auto it : a) {
    if (!s.count(it)) {
      cout << it << " ";
    }
  }
  cout << endl;
}

int main() {
  IOS
  cin >> t;
  while (t--)
    solve();
  return 0;
}