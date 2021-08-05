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
string s;
map<string,set<string>> m;

int main(){
    IOS

    cin >> n;
    cin.ignore();
    while(n--) {
        getline(cin, s);
        istringstream iss(s);
        string aux, aux2, name;

        iss >> aux;
        while (iss >> aux2) {
            name += aux2;
        }
        
        m[aux].insert(name);
    }
    
    for(auto it : m) {
        cout << it.first << " " << it.second.size() << endl;
    }

    return 0;
}