#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
#define sz(x) (int)x.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

int n, t1, t2, k, x, y;

void solve() {
    cin >> n >> t1 >> t2 >> k;

    vector<pair<int,double>> a(n);

    fore(i,0,n) {
        cin >> x >> y;
        a[i].first = i + 1;
        a[i].second = max(double(x * t1) * double(100 - k) / double(100) + double(y * t2), double(y * t1) * double(100 - k) / double(100) + double(x * t2));
    }

    sort(all(a), [&](pair<int,double> a, pair<int,double> b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    });

    fore(i,0,n) {
        cout << a[i].first << " ";
        cout << fixed << setprecision(2);
        cout << a[i].second << endl;
    }
}

int main(){
    IOS

    solve();    

    return 0;
}