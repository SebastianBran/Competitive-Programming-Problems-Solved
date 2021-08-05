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
    cin >> q;

    while (q--) {
        cin >> n;

        ll sum = 0, aux;

        fore(i,0,n) cin >> aux, sum += aux;

        if (sum % n == 0) cout << sum / n << endl;
        else cout << sum / n + 1 << endl;
    }
}

int main(){
    IOS

    solve();    

    return 0;
}