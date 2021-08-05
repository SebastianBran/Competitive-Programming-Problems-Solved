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
typedef vector<pair<int,int>> vii;

string s;
int pos1 = 0, pos2;

void solve() {
    cin >> s;
    
    for (auto it : s) {
        if (it == '+') pos1++;
        else pos1--;
    }

    cin >> s;

    int cont = 0;
    for (auto it : s) {
        if (it == '+') pos2++;
        else if (it == '-') pos2--; 
        else cont++;
    }

    map<int,int> a;
    for (int i = 0; i < (1 << cont); i++) {
        int aux = pos2;
        for (int j = 0; j < cont; j++) {
            if ((i >> j) & 1) aux++;
            else aux--;
        }
        a[aux]++;
    }

    cout << fixed;
    cout << setprecision(12);
    cout << (double)a[pos1] / (double)(1 << cont) << endl;
}

int main(){
    IOS

    solve();    

    return 0;
}