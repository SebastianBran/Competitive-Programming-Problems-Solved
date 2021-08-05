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
typedef vector<pair<int,int>> vii;

string s;
int q, n, l, r, pos;
char c;
vector<set<int>> a(26);

void solve() {
    cin >> n;

    if (n == 1) {
        cin >> pos >> c;
        a[s[pos - 1] - 'a'].erase(pos - 1);
        s[pos - 1] = c; 
        a[s[pos - 1] - 'a'].insert(pos - 1);
    }
    else {
        cin >> l >> r;
        l--, r--;

        int cont = 0;

        for(int i = 0; i < 26; i++) {
            auto it = a[i].lower_bound(l);

            if (it != a[i].end() && *(it) <= r) cont++;
        }

        cout << cont << endl;
    }
}

int main(){
    IOS

    cin >> s >> q;

    for(int i = 0; i < s.size(); i++) a[s[i] - 'a'].insert(i);

    while (q--) {
        solve();    
    }

    return 0;
}
