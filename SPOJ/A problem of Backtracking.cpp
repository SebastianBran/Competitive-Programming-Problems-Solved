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

int t, k;

void solve() {
    vi v(10);
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    fore (i, 0, 10) cin >> v[i];
    cin >> k;

    int ans;
    do {
        ans = 0;
        fore (i, 0, 10) ans += a[i] * v[i];

        if (ans <= k) {
            fore (i, 0, 10) cout << a[i] << " ";
            cout << endl;
            return;
        }
    } while (next_permutation(a, a + 10));

    cout << "-1" << endl; 
}

int main(){
    IOS

    cin >> t;
    while (t--)
        solve();

    return 0;
}