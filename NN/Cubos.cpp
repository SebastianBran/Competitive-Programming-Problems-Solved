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

map<string, int> a;
int cont = 0;
string aux;
int n;

int main(){
    IOS

    cin >> n;

    while(n--) {
        cin >> aux;

        if (a[aux] < 2) {
            cont++;
            a[aux]++;
        }
    }

    if (cont >= 6) cout << "SI" << endl;
    else cout << "NO" << endl;
    
    return 0;
}