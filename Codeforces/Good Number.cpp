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

int n, k;
string aux;
bool es = true;

int main(){
    IOS

    cin>>n>>k;


    string a;
    fore(i,0,k+1) a+=(char)('0'+i);

    int cont=0;
    while(n--){
        cin>>aux;

        es=true;
        set<char> b;
        fore(i,0,aux.size()) b.insert(aux[i]);

        int i=0;
        for(auto it : b){
            if(it!=a[i]){
                es=false;
                break;
            }
            i++;
            if(i==a.size()) break;
        }

        if(es && i==a.size()) cont++;
    }

    cout<<cont;
    
    return 0;
}