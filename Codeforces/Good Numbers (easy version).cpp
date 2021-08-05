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
vector<ll> sums;

void pre() {
    vector<ll> pot(10);
    pot[0] = 1;
    fore(i,1,10) {
        pot[i] = pot[i - 1] * 3;
    }

    for(int i = 0; i < (1 << 10); i++) {
        ll sum = 0;
        for(int j = 0; j < 10; j++) {
            if ((i >> j) & 1) {
                sum += pot[j];
            }
        }
        sums.pb(sum);
    }

    ordenar(sums);
}

void solve() {
    pre();

    cin >> q;

    while (q--) {
        cin >> n;
        cout << *(lower_bound(all(sums), n)) << endl;
    }
}

int main(){
    IOS

    solve();    

    return 0;
}