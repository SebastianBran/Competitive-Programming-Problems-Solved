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

int t;
ll ts;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> ts;

        if (ts & 1) {
            cout << (ts >> 1) << endl;
        }
        else {
            int aux = ts,  cont1 = 0;
            while (!(aux & 1)) {
                aux >>= 1;
                cont1++;
            }
            
            int i = 1 << (cont1 + 1);

            cout << (ll)(ts / i) << endl;
        }
    }
    
    return 0;
}