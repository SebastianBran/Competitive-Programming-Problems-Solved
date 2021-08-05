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

ll n, m, aux, v = 0, p = 0;

int main(){
    IOS

    cin >> n;

    vector<ll> pos(n);

    fore (i,0,n) {
        cin >> aux;
        pos[aux - 1] = i + 1;
    }

    cin >> m;

    fore (i,0,m) {
        cin >> aux;
        v += pos[aux - 1];
        p += n - pos[aux - 1] + 1;
    } 

    cout << v << " " << p;
    
    return 0;
} 