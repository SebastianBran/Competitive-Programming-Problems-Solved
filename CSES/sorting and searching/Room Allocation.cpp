#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define forell(i,x,n) for(long long i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;

int n;

void solve() {
    cin >> n;

    vector<pair<pair<int,int>,int>> a(n);
    vi c(n);

    fore(i,0,n) {
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
    }

    ordenar(a);

    multimap<int, int, greater<int>> b;
    int cont = 1;
    b.insert({0, 1});

    fore (i,0,n) {
        auto it = b.upper_bound(a[i].first.first);

        if (it != b.end()) {
            int aux = (*it).second;
            b.erase(it);
            b.insert({a[i].first.second, aux});
            c[a[i].second] = aux;
        } 
        else {
            cont++;
            b.insert({a[i].first.second, cont});
            c[a[i].second] = cont;
        }
    }

    cout << cont << endl;
    for (auto it : c) cout << it << " ";
}

int main(){
    IOS

    solve();    

    return 0;
}