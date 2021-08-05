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

int t, n, a;

int main(){
    IOS

    cin >> t;
    
    while (t--) {
        vi b;

        cin >> n;

        fore(i,0,n) {
            cin >> a;

            int pos = int(upper_bound(all(b), a) - b.begin());

            if (pos == b.size()) b.pb(a);
            else b[pos] = a;
        }
        
        cout << b.size() << " ";
        fore(i,0,b.size()) cout << b[i] << " ";
        cout << endl;
    }

    return 0;
}