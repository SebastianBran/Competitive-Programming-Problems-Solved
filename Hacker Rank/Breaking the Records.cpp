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

int n, mini, maxi, aux, cont1=0, cont2=0;

int main(){
    IOS

    cin>>n;

    cin>>aux;
    mini=maxi=aux;

    fore(i,1,n){
        cin>>aux;
        if(aux>maxi){
            cont1++;
            maxi=aux;
        }
        else if(aux<mini){
            cont2++;
            mini=aux;
        }
    }

    cout<<cont1<<" "<<cont2;

    return 0;
}