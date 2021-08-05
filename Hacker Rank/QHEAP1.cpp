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

int q, v, aux;
multiset<int> a;

int main(){
    IOS

    cin >> q;

    while (q--) {
        cin >> v;

        if (v == 1) {
            cin >> aux;
            a.insert(aux);
        }
        else if (v == 2) {
            cin >> aux;
            a.erase(a.find(aux));
        }
        else {
            cout << *(a.begin()) << endl;
        }
    }
    
    return 0;
}