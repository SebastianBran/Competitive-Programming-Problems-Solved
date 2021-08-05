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

int n, m;
ll cant = 0;

bool cmp (pair<int,int> a, pair<int,int> b) {
    if (a.second == b.second) return a.first > b.first;
    else return a.second > b.second;
}

int main() {

    cin >> n >> m;

    vector<pair<int,int>> a(m);

    fore(i,0,m) cin >> a[i].first >> a[i].second; 

    sort(all(a), cmp);

    fore(i,0,m) {
        if (a[i].first <= n) {
            cant += (ll)a[i].first*a[i].second;
            n -= a[i].first;
        }
        else {
            cant += (ll)a[i].second*n;
            break;
        }
    }

    cout << cant;

    return 0;
}