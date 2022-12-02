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

int t, n, h;

void printNum(ll num) {
    string s;

    fore (i, 0, n) {
        if (num & (1 << i)) s += "1";
        else s += "0";
    }

    reverse(all(s));

    cout << s << endl;
}

void solve() {
    cin >> n >> h;

    for (ll i = 0; i < (1 << n); i++) {
        if (__builtin_popcount(i) == h) {
            printNum(i);
        }
    }
}

int main(){
    IOS

    cin >> t;
    
    while (t--) {
        solve();
        if (t > 0) cout << endl;
    }

    return 0;
}