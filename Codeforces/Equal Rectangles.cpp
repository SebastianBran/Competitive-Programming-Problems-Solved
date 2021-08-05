#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

int q, n;

void solve() {
    cin >> n;

    int aux;
    map<int,int> m;

    fore (i,0,4*n) {
        cin >> aux, m[aux]++;
    }

    vii a;

    for (auto it : m) {
        a.pb(it);
    }

    int sz = (a.size() % 2 == 1) ? a.size() / 2 : a.size() / 2 - 1;

    int area = a[0].first * a[a.size() - 1].first;
    for (int i = 0, j = a.size() - 1; i <= sz; i++, j--) {
        if (a[i].first * a[j].first != area || a[i].second != a[j].second || a[i].second % 2 || a[j].second % 2) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
} 

int main(){
    IOS

    cin >> q;

    while (q--) {
        solve();    
    }

    return 0;
}