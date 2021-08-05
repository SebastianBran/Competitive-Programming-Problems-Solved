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

int t, n;

void solve() {
    cin >> n;

    vi a(2 * n);

    fore(i,0, 2 * n) cin >> a[i];

    ordenar(a);

    fore (i, 0, (2 * n) - 1) {
        int x = a[(2 * n) - 1] + a[i];

        multiset<int> b;
        vii ans;
        fore (j, 0, (2 * n)) b.insert(a[j]);

        int aux = x;
        while (!b.empty()) {
            int maxi = *(--b.end());
            b.erase(--b.end());
            int need = (aux - maxi);

            if (b.count(need)) {
                b.erase(b.lower_bound(need));
                ans.pb({need, maxi});
                aux = maxi;
            }   
            else break;
        }

        if (sz(ans) == n) {
            cout << "YES" << endl;
            cout << x << endl;
            fore (i,0,n) {
                cout << ans[i].first << " " << ans[i].second << endl;;
            }
            return;
        }
    }

    cout << "NO" << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }

    return 0;
}