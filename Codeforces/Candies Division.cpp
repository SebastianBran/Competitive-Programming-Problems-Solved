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

        int cant = (n / k) * k;
        int res = n - cant;
        cant += min(res, int(k / 2));
        cout << cant << endl;
    }
    
    return 0;
}