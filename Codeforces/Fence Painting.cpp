#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int t, n, m;

void solve() {
	cin >> n >> m;

	vi a(n), c(m);
	multimap<int, int> d;
	multimap<int, int> b;
	int aux;

	fore(i,0,n) cin >> a[i];
	fore(i,0,n) {
		cin >> aux;
		if (a[i] != aux) b.insert({aux, i});
		else d.insert({aux, i});
	}

	vector<int> ind;
	fore(i,0,m) {
		cin >> aux;
		if (b.count(aux)) {
			auto it = b.find(aux);
			int pos = (*it).second + 1;
			for (auto it : ind) c[it] = pos;
			ind.clear();
			d.insert({aux, pos - 1});
			c[i] = pos;
			b.erase(it);
		}
		else if (d.count(aux)) {
			int pos = (*d.find(aux)).second + 1;
			for (auto it : ind) c[it] = pos;
			ind.clear();
			c[i] = pos;
		}
		else ind.pb(i);
	}

	if (ind.size() > 0 || b.size() > 0) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		for (auto it : c) cout << it << " ";
		cout << endl;
	}
}

int main(){
	IOS

	cin >> t;

	while(t--)
		solve();

	return 0;
}
