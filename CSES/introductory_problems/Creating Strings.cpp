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
typedef vector<pair<int,int>> vii;

string s;

void solve() {
    cin >> s;

    ordenar(s);

    vector<string> v;

    do {
        v.pb(s);
    } while (next_permutation(all(s)));

    cout << sz(v) << endl;
    for (auto it : v) cout << it << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}