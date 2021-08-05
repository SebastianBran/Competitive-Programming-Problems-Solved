#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

string s;
int q, p;
char c;

int main(){
    IOS

    cin >> s >> q;

    vector<vector<int>> m(26, vector<int>((int)s.size() + 2, 0));

    fore (i,0,(int)s.size()) {
        m[s[i] - 'A'][i + 1]++;
    }

    fore (i,1,(int)s.size() + 2) {
        fore (j,0,26) {
            m[j][i] += m[j][i - 1];
        }
    }


    /*fore (i,1,27) {
        cout << char('A' + i - 1) << ": ";
        fore (j,0,s.size()) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }*/

    while (q--) {
        cin >> p >> c;

        int l = m[c - 'A'][p];
        int r = m[c - 'A'][s.size()] - m[c - 'A'][p + 1];

        if (l == r) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}