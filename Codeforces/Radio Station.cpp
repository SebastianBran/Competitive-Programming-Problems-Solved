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
string name, ip, aux;
map<string, string> ma;

int main(){
    IOS

    cin >> n >> m;
    fore(i,0,n) {
        cin >> name >> ip;
        ma[ip] = name;
    }

    fore(i,0,m) {
        cin >> name >> ip;
        aux = ip.substr(0, ip.size() - 1);
        cout << name << " " << ip << " #" << ma[aux] << endl;
    }
    
    return 0;
}