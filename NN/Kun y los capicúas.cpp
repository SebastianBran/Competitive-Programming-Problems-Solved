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

string n, m;

int main(){
    IOS

    cin >> n;

    m=n;
    reverse(all(m));
 
    fore (i, 0, n.size()){
        string temp = m.substr(m.size() - i, i);
        string aux1 = n + temp;
        string aux2 = aux1;
        reverse(all(aux2));
        if(aux1 == aux2){
            cout << (int)aux1.size() - (int)n.size();
            return 0;
        }
    }
    
    return 0;
}