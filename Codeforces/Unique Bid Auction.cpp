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

int t, n, aux;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n;

        map<int, vi> a;

        fore(i,0,n) cin >> aux, a[aux].push_back(i + 1);
        
        vector<pair<int, vi>> b;

        for (auto it : a) {
            b.push_back({it.first, it.second});
        }

        sort(all(b), [&](pair<int, vi> x, pair<int, vi> y) {
            if (x.second.size() == y.second.size()) return x.first < y.first;
            return x.second.size() < y.second.size();
        });

        if (b[0].second.size() > 1) cout << -1 << endl;
        else cout << b[0].second[0] << endl;
    }

    return 0;
}