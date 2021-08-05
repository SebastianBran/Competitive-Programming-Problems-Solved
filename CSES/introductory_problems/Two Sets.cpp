#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

ll n;

void solve() {
    cin >> n;

    ll t = (n * (n + 1)) / 2;

    if (t % 2 == 0) {
        cout << "YES" << endl;

        vector<ll> a, b;
        ll cont1 = 0;

        for (int i = n; i > 0; i--) {
            if (cont1 + i <= (t / 2)) {
                a.pb(i);
                cont1 += i;
            }
            else {
                b.pb(i);
            }
        }

        cout << a.size() << endl;
        fore (i,0,a.size()) cout << a[i] << " ";
        cout << endl << b.size() << endl;
        fore (i,0,b.size()) cout << b[i] << " ";
    }
    else cout << "NO";
}

int main(){
    IOS

    solve();    

    return 0;
}