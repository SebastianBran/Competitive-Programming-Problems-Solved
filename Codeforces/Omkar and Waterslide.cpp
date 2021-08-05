#include <bits/stdc++.h>
using namespace std;

////no es solucion

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int t, n, aux;

int main(){
    IOS

    cin>>t;
    
    while(t--){
        cin>>n;

        int maxi=-1, mini=1e9+1;
        while(n--){
            cin>>aux;
            maxi=max(maxi,aux);
            if(aux<maxi){
                mini=min(mini, aux);
            }
        }

        if(mini==1e9+1) mini=maxi;

        cout<<maxi-mini<<endl;
    }
    
    return 0;
}