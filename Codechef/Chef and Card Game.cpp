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

int t, n, cont1, cont2;

int power(int a) {
    string n = to_string(a);
    int p=0;

    for(auto it : n){
        p += (it - '0');
    }

    return p;
}


int main(){
    IOS
    
    cin >> t;

    while (t--) {
        cont1 = cont2 = 0;

        cin >> n;

        vi a(n), b(n);

        fore(i,0,n) cin >> a[i] >> b[i];

        fore(i,0,n) {
            if (power(a[i]) > power(b[i])) cont1++;
            else if (power(a[i]) < power(b[i])) cont2++;
            else {
                cont1++;
                cont2++;
            }
        }

        if (cont1 > cont2) cout << 0 << " " << cont1 << endl;
        else if (cont1 < cont2) cout<< 1 << " " << cont2 << endl;
        else cout << 2 << " " << cont1 << endl;
    }
    
    return 0;
}