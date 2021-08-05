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

int t, n, k;
string s;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> k >> s;

        int cont = 1, cont2 = 0;
        fore (i,0,s.size()) {
            if (cont2 == k + 1) {
                cont2 = 0;
                cont++;
            }

            if (s[i] == '1') {
                if (cont2 < k + 1) cont--;
                cont2 = 0;
            }
            
            cont2++;
        }

        cout << cont << endl;
    }

    return 0;
}