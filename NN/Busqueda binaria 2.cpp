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

int n, q;

int solve(vi& a, int x) {
    int l = 0, r = a.size() - 1;

    while (l < r) {
        int mit = l + (r - l + 1) / 2;
        if (a[mit] > x) r = mit - 1;
        else l = mit;
    }

    return a[l] == x ? l : -1;
}

int main(){
    IOS

    cin >> n >> q;

    vi a(n);
    fore (i, 0, n) cin >> a[i];

    int aux;
    while (q--) {
        cin >> aux;
        cout << solve(a, aux) << endl;
    }

    return 0;
}