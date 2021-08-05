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

int t;
ll x, y;

void solve() {
    cin >> t;

    ll num;
    while (t--) {
        cin >> x >> y;

        if (x >= y) {
            if (x & 1) num = (x - 1) * (x - 1) + y;
            else num = x * x - (y - 1);
        }
        else {
            if (y & 1) num = y * y - (x - 1);
            else num = (y - 1) * (y - 1) + x;
        }

        cout << num << endl;
    }
}

int main(){
    IOS

    solve();    

    return 0;
}