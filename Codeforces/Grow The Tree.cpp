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

const int MAXN = 100000;
int n;
vi v(MAXN);

ll sum(int l, int r) {
    ll sum = 0;
    for (int i = l; i < r; i++) {
        sum += v[i];
    }
    return sum;
}

void solve() {
    sort(v.begin(), v.begin() + n);

    ll x, y;

    x = sum(n / 2, n);
    y = sum(0, n / 2);

    cout << (x * x) + (y * y);
}

int main(){
    IOS

    cin >> n;

    fore (i, 0, n) cin >> v[i];

    solve();    

    return 0;
}