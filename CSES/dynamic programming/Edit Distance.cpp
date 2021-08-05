#include <bits/stdc++.h>

using namespace std;

string n, m;

void solve() {
	cin >> n >> m;
	
	vector<vector<int>> dp(n.size() + 1, vector<int>(m.size() + 1));
	
	for (int i = 0; i < n.size() + 1; i++) {
		for (int j = 0; j < m.size() + 1; j++) {
			if (i == 0) dp[i][j] = j;
			else if (j == 0) dp[i][j] = i;
			else {  
				int w = dp[i - 1][j - 1]; //equal
				int x = dp[i - 1][j - 1] + 1; //replace
				int y = dp[i - 1][j] + 1; //remove
				int z = dp[i][j - 1] + 1; //insert

				if (n[i - 1] == m[j - 1]) dp[i][j] = min({w, y, z});
				else dp[i][j] = min({x, y, z});
			}
		}
	}	

	cout << dp[n.size()][m.size()] << endl;
}

int main() {
	
	solve();

	return 0;
}
