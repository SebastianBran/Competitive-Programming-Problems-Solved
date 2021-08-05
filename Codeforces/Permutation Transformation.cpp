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
vi ans, a;

void solve(int l, int r, int h) {
    if(l > r) return;
    if(l == r) {
        ans[l] = h;
        return;
    }

    int pos_maxi, maxi = -1;
    fore(i,l,r + 1) {
        if(a[i] > maxi) {
            pos_maxi = i;
            maxi = a[i];
        }
    }

    ans[pos_maxi] = h;
    solve(l, pos_maxi - 1, h + 1);
    solve(pos_maxi + 1, r, h + 1);
}

int main(){
    IOS

    cin >> t;

    while(t--) {
        cin >> n;

        a.resize(n);
        ans.resize(n);
        fore(i,0,n) cin >> a[i];
        solve(0, n - 1, 0);

        for(auto it : ans) cout << it << " ";
        cout << endl;
    }
    
    return 0;
}
