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

int n, x;

void solve() {
    cin >> n >> x;

    map<int, vector<int>> a;
    int aux;

    fore(i,0,n) {
        cin >> aux;
        a[aux].pb(i + 1);
    }

    int diff;
    for (auto it : a) {
        diff = x - it.first;
        if (a.count(diff)) {
            for (auto it2 : it.second) {
                for (auto it3 : a[diff]) {
                    if (it2 != it3) {
                        cout << it2 << " " << it3;
                        return;
                    }
                }
            }
        }
    }

    cout << "IMPOSSIBLE";
}

int main(){
    IOS

    solve();    

    return 0;
}