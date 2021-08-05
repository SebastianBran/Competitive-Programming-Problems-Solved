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

        for(int i = n, j = 0; i >= 1; i--, j++) a[j] = i;

        if (n & 1) swap(a[n / 2], a[n / 2 + 1]);

        fore(i,0,n) cout << a[i] << " ";
        cout << endl;
    }
    
    return 0;
}