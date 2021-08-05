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

int n, m;

void solve() {
    cin >> n >> m;

    int aux;
    multiset<int, greater<int>> a;
    vi b(m);

    fore(i,0,n) cin >> aux, a.insert(aux);
    fore(i,0,m) cin >> b[i];

    fore(i,0,m) {
        auto it = a.lower_bound(b[i]);

        if (it != a.end()) {
            cout << *(it) << endl;
            a.erase(it);
        }
        else cout << -1 << endl;
    }
}

int main(){
    IOS

    solve();    

    return 0;
}