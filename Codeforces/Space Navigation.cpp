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

int t, x, y;
string s;

void solve() {
	cin >> x >> y;
	cin >> s;	

	int a = 0, b = 0;
	int dis1 = abs(x - a), dis2 = abs(y - b);
	fore(i,0,s.size()) {
		if (s[i] == 'U') {
			if (y - (b + 1) >= 0 && y - (b + 1) < dis2) {
				b++;
				dis2 = y - b;
			}
		}
		else if (s[i] == 'D') {
			if ((b - 1) - y >= 0 && (b - 1) - y < dis2) {
				b--;
				dis2 = b - y;
			}
		}
		else if (s[i] == 'L') {
			if ((a - 1) - x >= 0 && (a - 1) - x < dis1) {
				a--;
				dis1 = a - x;
			}
		}
		else {
			if (x - (a + 1) >= 0 && x - (a + 1) < dis1) {
				a++;
				dis1 = x - a;
			}
		}
	}

	if (a == x && y == b) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	IOS

	cin >> t;

	while (t--)
		solve();    

	return 0;
}
