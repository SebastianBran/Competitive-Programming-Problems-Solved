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

int n;

void solve() {
    cin >> n;
    
    vi a(n);

    fore(i,0,n) cin >> a[i];

    ordenar(a);

    fore(i,0,n - 2) {
        if (a[i] + a[i + 1] > a[i + 2] && a[i] + a[i + 2] > a[i + 1] && a[i + 1] + a[i + 2] > a[i]) {
            cout << "YES";
            return;
        }
    }

    cout << "NO" << endl;
}

int main(){
    IOS

    solve();
    
    return 0;
}