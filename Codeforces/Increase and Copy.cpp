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

        int aux = sqrt(n);
        int aux2 = (n / aux);
        int total = (n % aux2) > 0 ? 1 : 0;


        aux--; aux2--;
        total += aux + aux2;

        cout << total << endl;
    }

    return 0;
}