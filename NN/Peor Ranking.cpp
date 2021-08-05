#include <bits/stdc++.h>
using namespace std;

//no es solucion e.e

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int m, aux, rk;
int f1, f2, f3, cont = 0;
priority_queue<int> a;

int main(){
    IOS

    cin >> m >> f1 >> f2 >> f3;

    rk = f1 + f2 + f3 - min({f1, f2, f3});
    m-=3;

    fore(i,0,m) {
        cin >> aux;
        a.push(aux);
    }

    int place = 1;
    int a1, a2, rk2;
    int n = m - m/3;
    for (int i = 0; i < n; i++) {
        a1 = a.top();
        a.pop();
        a2 = a.top();
        a.pop();
        rk2 = a1 + a2;
        if (rk2 > rk) place++;
        else break;
    }

    cout << place << endl;

    return 0;
}