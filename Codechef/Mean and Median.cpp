#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int t, x, y;

void solve() {
  cin >> x >> y;

  int a[3];
  a[1] = y;

  int aux = (3 * x) - a[1];
  //a[2] = a[1] + 1;
  a[2] = a[1] + 1;
  a[0] = aux - a[2];
  while (a[0] > a[2] || (a[0] >= a[1])) {
    a[2] += 1;
    a[0] -= 1;
  }

  //if (aux - a[2])
  //a[2] = a[1] + 1;

  //sort(a, a + 3);
  cout << a[0] << " " << a[1] << " " << a[2] << endl;
}

int main() {
  IOS
  cin >> t;
  while (t--)
    solve();
  return 0;
}