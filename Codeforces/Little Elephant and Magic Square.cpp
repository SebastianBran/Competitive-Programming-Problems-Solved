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

int a[3][3];

int x, y, z;

int main(){
    IOS

    fore (i,0,3) fore (j,0,3) cin >> a[i][j];
    
    x = (a[0][1] + a[1][0]) / 2;
    y = (a[1][2] + a[2][1]) / 2;
    z = y + a[0][2] - a[2][1];

    a[0][0] = y;
    a[1][1] = z;
    a[2][2] = x;

    fore (i,0,3) {
        fore (j,0,3) {
            cout << a[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}