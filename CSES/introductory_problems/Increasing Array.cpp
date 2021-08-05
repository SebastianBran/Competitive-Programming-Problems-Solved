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

int n;

void solve() {
    cin >> n;
    
    vector<ll> a(n);

    fore (i,0,n) cin >> a[i];

    ll t = 0;

    fore (i,1,n) {
        if (a[i - 1] > a[i]) {
            t += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }

    cout << t;
}

int main(){
    IOS

    solve();    

    return 0;
}