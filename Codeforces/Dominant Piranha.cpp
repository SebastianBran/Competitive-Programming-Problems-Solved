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

int t, n, aux;

int main(){
    IOS

    cin >> t;

    while (t--) {
        pair<int, int> mayor = {0, -1};
        cin >> n;

        vector<int> a(n);

        fore(i,0,n) {
            cin >> a[i];
            if (i > 0) {
                if (a[i] > a[i - 1] && a[i] > mayor.first) {
                    mayor = {a[i], i + 1};
                } 
                else if (a[i - 1] > a[i] && a[i - 1] > mayor.first) {
                    mayor = {a[i - 1], i};
                }
            }
        }

        cout << mayor.second << endl;
    }
     
    return 0;
}