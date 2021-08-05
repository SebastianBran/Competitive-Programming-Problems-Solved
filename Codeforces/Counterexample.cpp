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

ll l, r;

void solve() {
    cin >> l >> r;

    if (r - l > 1) {
        if (r - l == 2 && (r & 1) && (l & 1)) cout << -1 << endl;
        else {
            if (l & 1) l++;
            cout << l << " " << l + 1 << " " << l + 2 << endl;
        }
    }
    else cout << -1 << endl;
}

int main(){
    IOS

    solve();

    return 0;
}