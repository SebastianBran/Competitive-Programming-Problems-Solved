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

int n, aux, cont=0;

int main(){
    IOS

    while(cin>>n){
        fore(i,0,5){
            cin>>aux;
            if(aux==n){
                cont++;
            }
        }

        cout<<cont<<endl;
        cont=0;
    }
    
    return 0;
}