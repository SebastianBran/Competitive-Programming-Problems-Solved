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

int t, n;

void solve() {
    cin >> n;

    vi sum(n + 1);

    sum[0] = 0;
    int aux;

    fore (i, 0, n) {
        cin >> aux;
        sum[i + 1] = aux + sum[i];
    }

    for (int i = 1; i <= n; i++) {
        if (sum[i - 1] - sum[0] == sum[n] - sum[i]) {
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