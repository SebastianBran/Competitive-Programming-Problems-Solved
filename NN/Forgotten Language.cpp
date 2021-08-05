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

int t, n, k, l;
string aux;

int main(){
    IOS

    cin >> t;

    while (t--) {
        set<string> s;
        vector<string> v;

        cin >> n >> k;
        fore(i,0,n) cin >> aux, v.push_back(aux); 

        fore(i,0,k) {
            cin >> l;
            fore(i,0,l) cin >> aux, s.insert(aux);
        }

        fore(i,0,n) {
            if (s.count(v[i])) cout << "YES ";
            else cout << "NO ";
        }

        cout << endl;
    }
    
    return 0;
}