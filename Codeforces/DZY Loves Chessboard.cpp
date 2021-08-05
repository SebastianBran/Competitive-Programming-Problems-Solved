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

int n, m;

int main(){
    IOS

    cin >> n >> m;

    vector<string> a(n);

    fore (i, 0, n) {
        cin >> a[i];
        fore (j, 0, m) {
            if(a[i][j] == '.'){
                a[i][j] = (i+j)%2 ? 'W' : 'B';
            }
        }
    }

    fore (i, 0, n) {
        fore (j, 0, m) {
            cout << a[i][j];
        }
        cout << endl;
    }
    
    return 0;
}