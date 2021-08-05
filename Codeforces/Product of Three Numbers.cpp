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

int t, n;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n;
        vi a;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a.pb(i);
                n /= i;
            }
            if (a.size() == 2) {
                a.pb(n);
                break;
            }
        }

        if (a.size() == 3) {
            if(a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) {
                ordenar(a);
                cout << "YES" << endl;
                cout << a[0] << " " << a[1] << " " << a[2] << endl;
            } 
            else {
                cout << "NO" << endl;
            }
        } 
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}