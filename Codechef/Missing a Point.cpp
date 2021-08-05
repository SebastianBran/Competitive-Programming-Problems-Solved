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

int t, n, x, y, xt, yt;

int main(){
    IOS     

    cin >> t;

    while ( t-- ) {
        map<int, int> m1;
        map<int, int> m2;

        cin >> n;
        n = 4*n - 1;

        while (n--) {
            cin >> x >> y;
            m1[x]++;
            if (m1[x]%2 == 0) m1.erase(x);
            m2[y]++; 
            if (m2[y]%2 == 0) m2.erase(y);
        }

        cout << m1.begin()->first << " " << m2.begin()->first << endl;
    } 
    
    return 0;
}