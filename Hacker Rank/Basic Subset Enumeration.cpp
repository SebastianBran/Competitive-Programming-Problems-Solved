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

int t, n, k;

void enumerate(vi& a, vi b, int ind, int n, int k) {
    if (k == 0) {
        cout << "{";
        if(!b.empty()) {
            fore (i, 0, b.size() - 1) cout << b[i] << ",";
            cout << b[b.size() - 1];
        }
        cout << "}" << endl;
        return;
    }

    fore (i, ind, n) {
        b.push_back(a[i]);
        enumerate(a, b, i + 1, n, k - 1);
        b.pop_back();
    }
}

void solve() {
    cin >> n >> k;
    vi a(n), b(0);
    fore (i, 0, n) cin >> a[i];

    sort(all(a));
    enumerate(a, b, 0, n, k);
    cout << "---" << endl;
}

int main(){
    IOS

    cin >> t;

    while(t--)
        solve();

    return 0;
}