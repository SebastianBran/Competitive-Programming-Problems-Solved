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
        int a[3];
        cin >> a[0] >> a[1] >> a[2] >> n;

        sort(a, a + 3);
        n -= (a[2] - a[0]) + (a[2] - a[1]);

        if (n >= 0 && n % 3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}