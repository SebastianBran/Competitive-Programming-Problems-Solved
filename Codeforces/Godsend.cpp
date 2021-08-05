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

int n, aux;
int cont1 = 0, cont2 = 0;

void solve() {
    cin >> n;

    fore(i,0,n) {
        cin >> aux;
        if(aux & 1) cont1++;
        else cont2++;
    }

    if(cont1 > 0) cout << "First" << endl;
    else cout << "Second" << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}