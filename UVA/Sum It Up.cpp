#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int t, n;

void solve() {
    vi v(n);
    fore (i, 0, n) cin >> v[i];

    int ans = 0;
    bool ok = false;

    cout << "Sums of " << t << ":" << endl;

    set<string, greater<string>> sums;
    fore (mask, 1, (1 << n)) {
        ans = 0;
        string aux = "";
        fore (i, 0, n) {
            if (mask & (1 << i)) {
                ans += v[i];
                aux = aux + (to_string(v[i]) + "+");
            }
        }
        if (ans == t) {
            ok = true;
            aux.pop_back();
            sums.insert(aux);
        }
    }

    if(!ok) cout << "NONE" << endl;
    else for (auto it : sums) cout << it << endl;
}

int main(){
    IOS

    while (cin >> t >> n) {
        if (t == 0 && n == 0) return 0;
        solve();
    }

    return 0;
}