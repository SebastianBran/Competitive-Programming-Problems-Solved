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

string s, aux;
vector<string> v;
map<string, int> m;

int main(){
    IOS

    cin >> s;

    do {
        aux = s.substr(0,10);
        v.push_back(aux);
        s.erase(0, 10);
    } while (s.size() != 0);

    fore(i,0,10) {
        cin >> aux;
        m[aux] = i;
    }

    for(auto it : v) {
        cout << m[it];
    }

    return 0;
}