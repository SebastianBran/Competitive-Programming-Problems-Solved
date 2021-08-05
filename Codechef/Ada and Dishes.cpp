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

        vi a(n);
        fore(i,0,n) cin >> a[i];

        int l = (1 << n);
        
        int min1 = 1e5, min2 = 1e5;
        fore(i,0,l) {
            int c1 = 0, c2 = 0;
            fore(j,0,n) {
                if (i & (1 << j)) c1 += a[j];
                else c2 += a[j];
            }
            min1 = max(c1, c2);
            min2 = min(min2, min1);
        }
        
        cout << min2 << endl;
    }

    return 0;
}