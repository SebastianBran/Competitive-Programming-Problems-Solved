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

int x, n;

void solve() {
    cin >> x >> n;

    set<int> s;
    multiset<int> m;
    vi a(n);
    fore(i,0,n) cin >> a[i];

    s.insert(0);
    s.insert(x);
    m.insert(x);

    fore(i,0,n) {
        auto it = s.lower_bound(a[i]);
        auto it2 = it;
        --it2;

        m.erase(m.lower_bound(*it - *it2));
        m.insert(*it - a[i]);
        m.insert(a[i] - *it2);
        s.insert(a[i]);

        cout << *(--m.end()) << endl;
    }
} 

int main(){
    IOS

    solve();    

    return 0;
}