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

    vi a(n);
    
    fore (i, 0, n) cin >> a[i];

    int curr = a[0], aux;

    cout << 0 << " ";
    
    fore (i, 1, n) {
        aux = a[i];
        aux = ~aux;
        curr = aux & curr;
        cout << curr << " ";
        curr = a[i] | curr;
    }

    cout << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--)
        solve();

    return 0;
}