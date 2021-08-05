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

int main(){
    IOS

    vector<vi> a(5);
    fore(i,0,5) a[i].resize(5);

    fore (i,0,5) {
        fore (j,0,5) {
            cin >> a[i][j];
        }
    }

    vi b = { 0, 1, 2, 3, 4 };

    int maxi = 0, sum;

    do {
        sum = 0;
        sum = (a[b[0]][b[1]] + a[b[1]][b[0]] + a[b[2]][b[3]] + a[b[3]][b[2]]) + 
                (a[b[1]][b[2]] + a[b[2]][b[1]] + a[b[3]][b[4]] + a[b[4]][b[3]]) + 
                (a[b[2]][b[3]] + a[b[3]][b[2]]) + (a[b[3]][b[4]] + a[b[4]][b[3]]);
        maxi = max(maxi, sum);
    } while (next_permutation(all(b)));

    cout << maxi << endl;
    
    return 0;
}