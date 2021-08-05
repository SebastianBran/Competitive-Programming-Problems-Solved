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

int t, k, m;

void solve() {
    cin >> k >> m;

    map<int, vi> a;
    int aux;
    fore (i, 0, m) {
        cin >> aux;
        a[aux].pb(i + 1);
    }

    int p1, p2;

    for (auto it : a) {
        int res = k - it.first;
        if (a.count(res)) {
            p1 = it.second[0];
            p2 = p1;
            fore (i, 0, a[res].size()) {
                if (a[res][i] != p1) {
                    p2 = a[res][i];
                    break;
                }
            }
            if (p2 != p1) {
                if (p2 < p1) {
                    swap(p1, p2);
                }
                break;
            }
        }
    }

    cout << p1 << " " << p2 << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--)
        solve();

    return 0;
}