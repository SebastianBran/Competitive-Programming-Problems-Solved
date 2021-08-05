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

    vi a(n), sc(n);

    fore(i,0,n) cin >> a[i];

    int maxi = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (i + a[i] < n) sc[i] = a[i] + sc[i + a[i]];
        else sc[i] = a[i]; 
        maxi = max(maxi, sc[i]);
    }

    cout << maxi << endl;
}

int main() {
    IOS

    cin >> t;

    while (t--) {
        solve();    
    }                                                        

    return 0;
}