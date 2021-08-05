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

int n;
ll aux;

int main(){
    IOS

    cin >> n;

    vector<pair<ll,int>> v;

    fore(i,0,n) cin >> aux, v.pb({aux, i});

    sort(all(v), [](pair<ll, int>& a, pair<ll, int>& b) {
        return a.first < b.first;
    });

    ll mini = 1e17;
    ll dif;
    fore (i,1,n) {
        dif = v[i].first - v[i - 1].first;
        if (dif < mini && v[i].second < v[i - 1].second) {
            mini = dif;
        }
    }

    cout << mini << endl;

    return 0;
}