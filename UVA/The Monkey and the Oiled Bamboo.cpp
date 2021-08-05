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

const int MAXN = 1e9;
int t, n, c = 1;

bool check(vi& a, int k) {
    int curr = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] - curr == k) k--;
        else if (a[i] - curr > k) return false;
        curr = a[i];
    }
    return true;
}

int bs(vi& a) {
    int l = 1, r = MAXN;

    while (l < r) {
        int mit = l + (r - l) / 2;
        if (check(a, mit)) r = mit;
        else l = mit + 1;
    }

    return l;
}

void solve() {
    cin >> n;

    vi a(n);
    fore (i, 0, n) cin >> a[i];

    cout << "Case " << c++ << ": " << bs(a) << endl;
}

int main(){
    IOS

    cin >> t;

    while (t--)
        solve();

    return 0;
}