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

int n;

int sum (int x) {
    string s = to_string(x);
    int cont = 0;
    for (auto it : s) cont += (it - '0');
    return  cont;
}

int main(){
    IOS

    int cont = 0;

    cin >> n;

    int ini = max (n - 100, 1); 
    fore (i,ini,n+1) {
        int aux = sum(i);
        if (i + aux + sum(aux) == n) cont++;
    }

    cout << cont;
    
    return 0;
}