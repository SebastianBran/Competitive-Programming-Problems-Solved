#include <bits/stdc++.h>

using namespace std;

int t, n, aux, total;
bool impar, par;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>t;
	
	while(t--){
		total=0;
		impar = false;
		par = false;
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>aux;
			total+=aux;
			if(aux%2!=0) { 
				impar=true;
			}
			else{
				par=true;
			}
		}
		
		if(total%2!=0){
			cout<<"YES\n";
		}
		else{
			if(impar==false){
				cout<<"NO\n";
			}
			else if(impar && n%2!=0){
				cout<<"YES\n";
			}
			else if(par && impar && n%2==0){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
	}
		
	return 0;
}
