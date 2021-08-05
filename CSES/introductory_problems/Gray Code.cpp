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

int n;

vector<string> gray_code(int n) {
    if (n == 1) return { "0", "1" };

    vector<string> v, aux;
    v = gray_code(n - 1);
    aux = v;
    reverse(all(aux));

    fore(i, 0, sz(v)) v[i] = '0' + v[i];
    fore(i, 0, sz(aux)) aux[i] = '1' + aux[i];

    v.insert(v.end(), all(aux));
    return v;
}

void solve() {
    cin >> n;

    vector<string> v, aux;

    vector<string> gray = gray_code(n);
    for (auto it : gray) cout << it << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}