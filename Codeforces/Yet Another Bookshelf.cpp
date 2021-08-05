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

int t, n, aux;

int main(){
    IOS

    cin >> t;

    while (t--) {
        stack <int> a;
        int cont = 0, cont2 = 0;

        cin >> n;
        
        fore (i,0,n) {
            cin >> aux;
            
            if (aux == 0) cont2++;
            else {
                if (!a.empty()) {
                    cont += cont2;
                    cont2 = 0;
                }
                else {
                    a.push(aux);
                    cont2 = 0;
                }
            }
        }

        cout << cont << endl;
    }
     
    return 0;
}