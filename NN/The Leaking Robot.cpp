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

int t, x, y;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> x >> y;

        if (x <= 0) {
            if ((abs(x) <= abs(y) && abs(y)%2 == 0) || (abs(y) <= abs(x) && abs(x)%2 == 0)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            if (((-x + 1) <= y && y <= (x + 1) && x%2 == 1) || (x <= (abs(y) + 1) && abs(y)%2 == 0 && y < 0) || 
            (x <= (abs(y) - 1) && abs(y)%2 == 0 && y >= 0)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}