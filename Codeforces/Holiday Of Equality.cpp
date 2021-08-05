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

int n;

void solve() {
    cin >> n;

    vi a(n);
    fore(i,0,n) cin >> a[i];

    int maxi = *max_element(all(a));
    int ans = 0;

    fore(i,0,n) {
        ans += (maxi - a[i]);
    }

    cout << ans << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}