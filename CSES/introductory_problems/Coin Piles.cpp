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

int t, a, b;

void solve() {
    cin >> a >> b;

    int maxi = max(a, b);
    int mini = min(a, b);

    int dif = (maxi - mini);

    maxi -= (2 * dif);
    mini -= dif;

    if (maxi >= 0 && mini >= 0 && maxi % 3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }

    return 0;
}