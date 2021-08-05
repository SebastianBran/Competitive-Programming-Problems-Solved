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

ll t, l, d, s, c;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> l >> d >> s >> c;
        
        double n = (double)s*pow((double)(1+c),d-1);
        
        if (n >= l) cout <<"ALIVE AND KICKING" << endl;
        else cout << "DEAD AND ROTTING" << endl;
    }
    
    return 0;
}