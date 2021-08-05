#include <bits/stdc++.h>

using namespace std;

set<int> puntajes;
const int NMAX = 2*1e5;
int n, m, aux, puntajes2[NMAX];

int bs(int izquierda, int derecha, int n){
	int mit;
	while(izquierda<derecha){
		mit=(izquierda+derecha)/2;
		
		if(n>puntajes2[mit]){
			izquierda=mit+1;
		}
		else{
			derecha=mit;
		}
	}
	
	if(puntajes2[izquierda]<=n){
		return izquierda;
	}
	else if(puntajes2[izquierda]>n){
		return izquierda-1;
	}
	
	return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n;
	
	while(n--){
		cin>>aux;
		puntajes.insert(aux);
	}
	
	int i=0;
	for(auto it : puntajes){
		puntajes2[i]=it;
		i++;
	}
	
	cin>>m;
	
	while(m--){
		cin>>aux;
		cout<<puntajes.size()-bs(0,puntajes.size()-1,aux)<<"\n";
	}
	
	return 0;
}
