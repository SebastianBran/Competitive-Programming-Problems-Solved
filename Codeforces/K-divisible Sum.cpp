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

int t, n, k;

void solve() {
    cin >> n >> k;


    if (n % k == 0) cout << 1 << endl;
    else if (n > k) {
        cout << 2 << endl;
    }
    else {
        if (k % n == 0) cout << k / n << endl;
        else cout << (k / n) + 1 << endl;
    }
}

int main(){
    IOS

    cin >> t;
    
    while (t--) 
        solve();    

    return 0;
}