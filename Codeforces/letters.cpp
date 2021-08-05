#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

using namespace std;

const int MAXN=2*1e5+1;
int n, m, indice;
ll aux;
vector<ll> hab(MAXN,0);

int bs(int izquierda, int derecha, ll n){
	int mit=0;
	
	while(izquierda<derecha){
		mit=(izquierda+derecha)/2;
		
		if(hab[mit]<n){
			izquierda=mit+1;
		}
		else{
			derecha=mit;
		}
	}
	
	return izquierda;
}

int main(){
    IOS
    
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
    	cin>>aux;
    	hab[i]=aux+hab[i-1];
	}
	
	fore(i, m){
		cin>>aux;
		indice=bs(1,n,aux);
		cout<<indice<<" "<<aux-hab[indice-1]<<endl;
	}
    
    return 0;
}
