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

    vector<pair<ll,ll>> a(n);
    vll suffix(n);
    fore(i,0,n) {
        cin >> a[i].first;
        a[i].second = i;
    }

    ordenar(a);

    suffix[0] = a[0].first;
    fore(i,1,n) {
        suffix[i] = suffix[i - 1] + a[i].first;
    }

    vi ans;
    ans.pb(a[n - 1].second + 1);
    for(int i = n - 2; i >= 0; i--) {
        if(a[i + 1].first <= suffix[i]) ans.pb(a[i].second + 1);
        else break;
    } 

    ordenar(ans);

    cout << ans.size() << endl;
    for(auto it : ans) cout << it << " ";
    cout << endl;
    //FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
}   
 
int main(){
    IOS

    cin >> t;

    while(t--)
        solve();
    
    return 0;
}
