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

int q, n;

int main(){
    IOS

    cin >> q;

    while (q--) {
        cin >> n;

        vi a(n);

        fore(i,0,n) cin >> a[i];

        int pasos = n - 1;
        int pos;
        set<pair<int,int>> moves;
        fore(i,0,n) {
            fore(j,0,n) {
                if (i + 1 == a[j]) pos = j;
            }

            for(int j = pos; j > 0 && pasos > 0; j--) {
                if (a[j - 1] > a[j] && !moves.count({j - 1, j})) {
                    swap(a[j - 1], a[j]);
                    moves.insert({j - 1, j});
                    pasos--;
                }
                else break;
            }

            if (!pasos) break;
        }

        fore(i,0,n) cout << a[i] << " ";
        cout << endl;
    }
    
    return 0;
}