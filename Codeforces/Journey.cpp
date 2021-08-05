#include <bits/stdc++.h>

using namespace std;

int t, n;
string s;

void solve() {
    cin >> n >> s;

    vector<int> dp1(n + 1), dp2(n + 1);

    for (int i = 0; i < n + 1; i++) {
        if (i == 0) dp1[i] = 0;
        else if (i == 1 && s[i - 1] == 'L') dp1[i] = i - 1;
        else if (s[i - 1] == 'R') dp1[i] = i;
        else if (s[i - 2] == 'L') dp1[i] = i - 1;
        else dp1[i] = dp1[i - 2];
    }

    for (int i = n; i >= 0; i--) {
        if (i == n) dp2[i] = n;
        else if (i == n - 1 && s[i] == 'R') dp2[i] = i + 1;
        else if (s[i] == 'L') dp2[i] = i;
        else if (s[i + 1] == 'R') dp2[i] = i + 1;
        else dp2[i] = dp2[i + 2];
    }

    for (int i = 0; i < n + 1; i++) {
        int L = i - dp1[i];
        int R = dp2[i] - i;
        cout << L + R + 1 << " ";
    }
    cout << endl;
    
}

int main() {

    cin >> t;

    while (t--) {
        solve(); 
    }

    return 0;
}