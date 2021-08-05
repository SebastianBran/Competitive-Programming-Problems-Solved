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

int n, m, k;

void solve() {
    cin >> n >> m >> k;

    vi a(n), b(m);

    fore (i,0,n) cin >> a[i];
    fore (i,0,m) cin >> b[i];

    ordenar(a);
    ordenar(b);

    int pos = 0, ans = 0;
    fore (i,0,m) {
        fore (j,pos,n) {
            if (b[i] - a[j] < -k) {
                break;
            }
            else if (b[i] - a[j] > k) {
                pos++;
            }
            else {
                ans++;
                pos++;
                break;
            }
        }
    }

    cout << ans << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}