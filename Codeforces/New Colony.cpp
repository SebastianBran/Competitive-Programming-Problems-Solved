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

int t, n, k;

void solve() {
	cin >> n >> k;

	vi a(n);
	fore(i,0,n) cin >> a[i];
	
	if (k < 10000) {
		int ind = 0;
		while(k-- && ind != -1) {
			int pos = 0;
			while (pos < n - 1 && a[pos] >= a[pos + 1]) pos++;
			if (pos == n - 1) ind = -1;
			else {
				a[pos]++;
				ind = pos + 1;
			}
		}
		cout << ind << endl;
	}
	else cout << -1 << endl;
}

int main(){
	IOS

	cin >> t;

	while(t--)
		solve();

	return 0;
}
