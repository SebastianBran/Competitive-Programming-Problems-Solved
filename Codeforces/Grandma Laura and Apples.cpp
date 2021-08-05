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

int n;
ll p;

void solve() {
    cin >> n >> p;

    vector<string> s(n);
    fore (i, 0, n) cin >> s[i];

    reverse(all(s));

    ll cant = 0;
    ll apples = 0;

    for (auto it : s) {
        if (it == "half") {
            cant += apples * p;
            apples = 2 * apples;
        }
        else {
            cant += apples * p + p / 2;
            apples = 2 * apples + 1;
        }
    }

    cout << cant << endl;
}

int main(){
    IOS

    solve();

    return 0;
}