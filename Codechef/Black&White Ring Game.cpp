#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t;
long long n;

void solve() {
  cin >> n;

  vector<int> a(n);
  int cont[2];

  cont[0] = cont[1] = 0;
  for (auto& it : a) {
    cin >> it;
    cont[it]++;
  }

  int x = 0;
  if (a[0] != a[n - 1]) x++;
  for (int i = 0; i < n - 1; i++)
    if (a[i] != a[i + 1]) x++;

  cout << "cont -> " << cont[0] << " " << cont[1] << endl;
  int y = 2 * min(cont[0], cont[1]);

  cout << "--> " << x << " " << y << endl;
  if (((y - x) / 2) & 1) cout << "alice" << endl;
  else cout << "bob" << endl;
}

int main() {
  IOS
  cin >> t;

  while (t--)
    solve();
  return 0;
}