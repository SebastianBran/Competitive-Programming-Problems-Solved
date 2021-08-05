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

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> k;

        vi a(n), b(n);

        int sum = 0;
        fore(i,0,n) {
            cin >> a[i];
            sum += a[i];
        }
        fore(i,0,n) cin >> b[i];

        ordenar(a);
        ordenar(b);
        reverse(all(b));

        fore(i,0,min(k,n)) {
            if (a[i] < b[i]) {
                sum -= a[i];
                sum += b[i];
            }
            else break;
        }

        cout << sum << endl;
    }
    
    return 0;
}