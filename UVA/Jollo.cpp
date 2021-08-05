#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,a,n) for(int i=a;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a)) 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;

int a[3], b[3];

int main(){
    IOS

    while (cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1]) {
        if (a[0] == 0) break;

        vector<bool> ava(54, true);

        sort(a, a + 3);
        sort(b, b + 2);

        fore (i,0,3) { ava[a[i]] = false; }
        fore (i,0,2) { ava[b[i]] = false; } 

        if (b[1] < a[1]) b[2] = 53;
        else {
            int ini = 1;
            if (b[1] > a[2]) {
                if (b[0] > a[2]) ini = 1;
                else if (b[0] > a[1]) ini = a[1];
                else ini = a[2];
            }
            else if (b[0] > a[1]) ini = a[1];
            else ini = 53; 

            fore(i, ini, 54) {
                if (ava[i]) {
                    b[2] = i;
                    break;
                }
            }
        }

        if (b[2] == 53) cout << -1 << endl;
        else cout << b[2] << endl;
    }
    
    return 0;
}