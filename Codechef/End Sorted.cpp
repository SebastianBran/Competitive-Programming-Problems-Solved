#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

const int MAXN = 1e5;
int t, n;
int nums[MAXN];

void solve() {
  cin >> n;
  
  for (int i = 0; i < n; i++) cin >> nums[i];

  int mini = INT_MAX, posmin = 0;
  int maxi = -INT_MAX, posmax = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] < mini) {
      mini = nums[i];
      posmin = i;
    }

    if (nums[i] > maxi) {
      maxi = nums[i];
      posmax = i;
    }
  }

  int op = (posmin - 1) + (n - posmax);
  if (posmin > posmax) op--;
  
  cout << op << endl;
}

int main() {
  IOS

  cin >> t;

  while (t--)
    solve();
    
  return 0;
}