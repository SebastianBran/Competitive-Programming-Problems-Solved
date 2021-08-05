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
typedef vector<pair<int,int>> vii;

int n, aux;

void solve() {
    cin >> n;
    
    map<int,vector<int>> m;

    fore(i,0,n) cin >> aux, m[aux].push_back(i);
    
    int cont = 0, x = 0, i = 0;
    vi pos(n);

    for(auto it = m.rbegin(); it != m.rend(); it++) {
        for(auto it2 : it->second) {
            cont += x * it->first + 1;
            pos[i] = it2 + 1;
            i++;
            x++;
        }
    }

    cout << cont << endl;
    fore(i,0,n) cout << pos[i] << " ";
}

int main(){
    IOS

    solve();    

    return 0;
}