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

int n, cont1=0, cont2=0;
string aux;
map<string, int> a;

int main(){
    IOS

    cin>>n;

    while(n--){
        cin>>aux;
        a[aux]++;
    }

    int maxi=0;

    for(auto it : a){
        if(it.second>maxi){
            maxi=it.second;
            aux=it.first;
        }
    }

    cout<<aux;
    
    return 0;
}