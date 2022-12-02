#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, n, k;

/*void solve() {
  vector<vector<int>> a;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> k;
    vector<int> v(k);
    for (auto& it : v) {
      cin >> it;
    }
    a.push_back(v);
  }

  for (int i = 0; i < n; i++) {
    vector<int> x = a[i];
    for (int j = i + 1; j < n; j++) {
      vector<int> y = a[j];
      set<int> s;
      for (auto it : x) s.insert(it);
      for (auto it : y) s.insert(it);
      if (s.size() == 5) {
        cout << "YES" << endl;
        return;
      }
    }
  }

  cout << "NO" << endl;
}*/
void solve() {
  cin >> n;
  vector<int> a;
  int pos;

  for (int i = 0; i < n; i++) {
    cin >> k;
    int aux = 0;
    for (int j = 0; j < k; j++) {
      cin >> pos;
      aux |= (1 << (pos - 1));
    }
    a.push_back(aux);
  }

  for (int i = 0; i < n; i++) {
    int x = a[i];
    for (int j = i + 1; j < n; j++) {
      int y = a[j];
      if ((x | y) == 31) {
        cout << "YES" << endl;
        return;
      }
    }
  }

  cout << "NO" << endl;
}

int main() {
  IOS
  cin >> t;
  while (t--)
    solve();
  return 0;
}