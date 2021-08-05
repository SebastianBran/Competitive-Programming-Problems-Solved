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

int n, aux;
map<int, int> m;

int main(){
    IOS 

    cin >> n;

    while(n--) {
        cin >> aux;
        m[aux]++;
    }

    int cont = 0;
    for(auto it : m) {
        if (it.second > it.first) cont += (it.second - it.first);
        else if (it.second < it.first) cont += it.second;
    }

    cout << cont;
    
    return 0;
}