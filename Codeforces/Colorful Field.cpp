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

int n, m, k, t;
vector<string> plants = { "Carrots", "Kiwis", "Grapes" };

void solve() {
    cin >> n >> m >> k >> t;

    vii a;
    int x, y;

    fore (i, 0, k) {
        cin >> x >> y;
        a.pb({x, y});
    }

    ordenar(a);

    int d1, d2;
    fore (i, 0, t) {
        cin >> x >> y;
        
        if (find(all(a), make_pair(x, y)) != a.end()) cout << "Waste" << endl;
        else {
            d1 = (x - 1) * m + (y - 1); //cantidad de cuadrados hasta la coordenada
            d2 = lower_bound(all(a), make_pair(x, y)) - a.begin(); //cantidad de cuadrados ocupados antes de la coordenada
            cout << plants[(d1 - d2) % 3]  << endl;
        }
 
    }   
}

int main(){
    IOS

    solve();

    return 0;
}