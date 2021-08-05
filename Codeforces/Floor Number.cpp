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
double n, x;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> n >> x;

        n -= 2;
        int aux = (n / x > 0) ? ceil(n / x) : 0;
        cout << 1 + aux << endl;
    }
    
    return 0;
}