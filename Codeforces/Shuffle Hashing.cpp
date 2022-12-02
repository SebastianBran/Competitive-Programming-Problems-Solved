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
string s, h;

void solve() {
    cin >> s >> h;

    if (s.size() > h.size()) {
        cout << "NO" << endl;;
        return;
    }

    ordenar(s);

    fore (i, 0, (h.size() - s.size()) + 1) {
        string sub(h.begin() + i, h.begin() + i + s.size());

        ordenar(sub);

        if (s == sub) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--)
        solve();    

    return 0;
}