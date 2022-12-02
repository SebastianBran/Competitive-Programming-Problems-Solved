#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

const int MAXN = 1e6;

int n, q;
int bsize;
int a[MAXN];
map<int, multiset<int>> m;

void build(){
	for(int i = 0; i < n; i++){
		m[i / bsize].insert(a[i]);
	}
}

void update(int pos, int val){
  pos--;
	int idx = pos / bsize;
	m[idx].erase(a[pos]);
  m[idx].insert(val);
	a[pos] = val;
}

int lower(multiset<int> &s, int x) {
  int cont = 0;
  for (auto it : s) {
    if (it <= x) {
      cont++;
    }
    else break;
  }
  return cont;
}

int query(int p, int r, int x) {
  p--;
  r--;
  int cont = 0;
  while(p % bsize and p <= r){ // Primer bloque incompleto
    if (a[p] <= x) {
      cont++;
    }
    p++;
	}
	while(p + bsize - 1 <= r){ // Bloques completos
    multiset<int> s = m[p / bsize];
    /*cout << "set -> ";
    for (auto it : s) cout << it << " ";
    cout << endl;*/
		cont += lower(s, x);
		p += bsize;
	}
	while(p <= r) { // Último bloque incompleto
		if (a[p] <= x) {
      cont++;
    }
    p++;
	}
	return cont;
}

int main() {
  IOS

  cin >> n >> q;
  bsize = ceil(sqrt(n));

  for (int i = 0; i < n; i++) cin >> a[i];

  build();

  char c;
  int p, r, i, x;
  while (q--) {
    cin >> c;

    if (c == 'C') {
      cin >> p >> r >> x;
      int ans = query(p, r, x);
      cout << ans << endl;
    }
    else {
      cin >> i >> x;
      update(i, x);
    }
  }
  return 0;
}