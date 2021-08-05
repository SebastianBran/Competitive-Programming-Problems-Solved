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

int n1, n2, n3, aux, t1, t2, t3;
queue<int> a, b, c;


int main(){
    IOS

    t1 = t2 = t3 = 0;

    cin >> n1 >> n2 >> n3;
    
    fore (i,0,n1) {
        cin >> aux, a.push(aux);
        t1 += aux;
    }
    fore (i,0,n2) {
        cin >> aux, b.push(aux);
        t2 += aux;
    }
    fore (i,0,n3) {
        cin >> aux, c.push(aux);
        t3 += aux;
    }

    while (t1 != t2 || t1 != t3 || t2 != t3) {
        if ((t1 > t2 || t1 > t3) && !a.empty()) {
            t1 -= a.front();
            a.pop();
        }
        if ((t2 > t1 || t2 > t3) && !b.empty()) {
            t2 -= b.front();
            b.pop();
        }
        if ((t3 > t1 || t3 > t2) && !c.empty()) {
            t3 -= c.front();
            c.pop();
        }
    }

    cout << t1;

    return 0;
}