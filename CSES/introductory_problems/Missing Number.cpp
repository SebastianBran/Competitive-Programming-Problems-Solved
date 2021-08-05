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

ll n;

void solve() {
    cin >> n;

    ll t = (n * (n + 1)) / 2;

    ll sum = 0, aux;
    fore(i,0,n - 1) cin >> aux, sum += aux;

    cout << t - sum;
}

int main(){
    IOS

    solve();    

    return 0;
}