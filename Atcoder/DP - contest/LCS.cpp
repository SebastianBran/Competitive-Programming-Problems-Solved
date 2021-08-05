#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
 
string s, t;
int dp[3001][3001];
 
void solve() {
 	int lens = s.size();
    int lent = t.size();
    
    for(int i = 0; i <= lens; i++) {
    	for(int j = 0; j <= lent; j++) {
        	if(i == 0 || j == 0) dp[i][j] = 0;
            else {
            	if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    stack<char> aux;
    string ans;

    int i = lens - 1, j = lent - 1;

    while(i >= 0 && j >= 0) {
        if(s[i] == t[j]) {
            aux.push(s[i]);
            i--; j--;
        }
        else {
            if(dp[i + 1][j + 1] == dp[i + 1][j]) j--;
            else i--;
        }
    }

    while(!aux.empty()) {
        ans += aux.top();
        aux.pop();
    }

    cout << ans << endl;
}
 
int main() {
    IOS
  	cin >> s >> t;
  
  	solve();
  	
	return 0; 
}