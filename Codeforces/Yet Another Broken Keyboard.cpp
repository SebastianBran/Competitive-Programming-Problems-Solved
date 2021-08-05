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

int n, k;
string s;
set<char> l;

int main(){
    IOS

    cin >> n >> k;
    cin >> s;
    fore(i,0,k) {
        char aux;
        cin >> aux, l.insert(aux);
    }

    ll t = 0;
    ll cont = 0;
    fore(i,0,s.size()) {
        if (l.count(s[i])) {
            cont++;
        }
        if (!l.count(s[i]) || i == s.size() - 1) {
            t += (ll)(cont * (cont + 1)) / 2;
            cont = 0;
        }
    }

    cout << t;

    return 0;
}