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

int n;

int main(){
    IOS

    cin >> n;

    vi a(n);

    fore (i,0,n) cin >> a[i];

    fore (i,0,(1 << n)) {
        int sum = 0;
        fore (j,0,n) {
            if ((i >> j) & 1) sum += a[j];
            else sum -= a[j];
        }
        if (abs(sum) % 360 == 0) {
            cout << "YES";
            return 0;
        }
    } 
    
    cout << "NO";

    return 0;
}