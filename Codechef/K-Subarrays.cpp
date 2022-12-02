#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

const int MAXN = 2 * 1e5;
int t, n, k, a[MAXN], g;

void solve() {
  cin >> n >> k;

  g = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    g = __gcd(g, a[i]);
  }

  int aux = 0, cont = 0;
  for (int i = 0; i < n; i++) {
    aux = __gcd(aux, a[i]);
    if (aux == g) {
      cont++;
      aux = 0;
    }
  }

  if (cont >= k) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main() {
  IOS
  cin >> t;

  while (t--)
    solve();

  return 0;
}