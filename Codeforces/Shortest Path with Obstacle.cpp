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

int t;

void solve() {
    int xa, ya, xb, yb, xf, yf;

    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xf >> yf;

    int dis = abs(xa - xb) + abs(ya - yb);
    
    if ((xf == xa && xf == xb && (yf > min(ya, yb) && yf < max(ya, yb))) || (yf == ya && yf == yb && (xf > min(xa, xb) && xf < max(xa, xb)))) dis += 2;

    cout << dis << endl;
}

int main(){
    IOS

    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}