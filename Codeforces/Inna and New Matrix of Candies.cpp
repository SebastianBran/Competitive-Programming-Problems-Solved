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

int n, m;
char c;

void solve() {
    cin >> n >> m;

    vector<pair<vector<int>, set<int>>> a(n);

    fore(i,0,n) {
        fore(j,0,m) {
            cin >> c;
            if (c == 'G') a[i].first.pb(j);
            else if (c == 'S') a[i].second.insert(j);
        }
    }

    set<int> pause;
    fore(i,0,n) {
        fore(j,0,(int)a[i].first.size()) {
            auto it = a[i].second.lower_bound(a[i].first[j]);
            if (it != a[i].second.end()) pause.insert(*(it) - a[i].first[j]);
            else {
                cout << -1;
                return;
            }
        }
    }

    cout << pause.size(); 
}

int main(){
    IOS

    solve();    

    return 0;
}