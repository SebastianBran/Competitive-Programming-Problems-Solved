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

int t, n, q, query;
vll a, sum;
set<ll> ans;

int last_aparation(int lo, int hi, int x) {
    int l = lo, r = hi;

    while  (l < r) {
        int mit = l + (r - l) / 2;
        if (a[mit] < x || (a[mit] == x && a[mit + 1] == x)) l = mit + 1;
        else r = mit;
    }

    if (a[l] == x) return l;
    else return l - 1;
}

void solve(int l, int r) {
    if (l == r) {
        ans.insert(a[l]);
        return;
    }
    if (a[l] == a[r]) {
        ans.insert(sum[r + 1] - sum[l]);
        return;
    }

    int mit = a[l] + (a[r] - a[l]) / 2;
    int pt = last_aparation(l, r, mit);

    ans.insert(sum[r + 1] - sum[l]);

    solve(l, pt);
    solve(pt + 1, r);
}

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> q;

        a.resize(n);
        sum.resize(n + 1);
        ans.clear();

        fore (i,0,n) cin >> a[i];

        ordenar(a);

        sum[0] = 0;
        fore (i,0,n) sum[i + 1] = sum[i] + a[i];

        solve(0, n - 1);

        while (q--) {
            cin >> query;
            
            if (ans.count(query)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }   

    return 0;
}