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
ll x1, x2, y1, y2;

int main(){
    IOS

    cin >> t;

    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2;

        int d1 = abs(x1 - x2);
        int d2 = abs(y1 - y2);

        if (d1 == 0 || d2 == 0) {
            cout << d1 + d2 << endl;
        }
        else {
            cout << d1 + d2 + 2 << endl;
        }
    }

    return 0;
}