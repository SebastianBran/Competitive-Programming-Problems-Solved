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

int t, n;

void solve() {
    cin >> n;

    int aux;
    vi even, odd;

    fore(i,0,n) {
        cin >> aux;

        if (aux % 2) odd.pb(aux);
        else even.pb(aux); 
    }

    even.resize(n, 0);
    odd.resize(n, 0);
    ordenar(even);
    ordenar(odd);
    ll sc1 = 0, sc2 = 0;

    fore(i,0,n) {
        if (i % 2 == 0) {
            if (even.back() > odd.back()) {
                sc1 += even.back();
                even.pop_back();
            }
            else odd.pop_back();
        }
        else {
            if (odd.back() > even.back()) {
                sc2 += odd.back();
                odd.pop_back();
            }
            else even.pop_back();
        }
    }

    if (sc1 == sc2) cout << "Tie" << endl;
    else if (sc1 > sc2) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int main() {
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }                                                        

    return 0;
}