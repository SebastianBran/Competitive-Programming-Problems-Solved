#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

string s;

void solve() {
    cin >> s;

    int Q = 0, QA = 0, QAQ = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != 'Q' && s[i] != 'A') continue;
        if(s[i] == 'Q') {
            Q++;
            QAQ += QA;
        }
        else QA += Q;
    }

    cout << QAQ << endl;
}

int main() {
    IOS

    solve();

    return 0;
}