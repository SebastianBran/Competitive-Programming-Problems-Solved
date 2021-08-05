#include <bits/stdc++.h>

using namespace std;

int n, p;
string marea;
bool cambio=false, es=false;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n>>p;
	cin>>marea;
	
	for(int i=1;i<=n-p;i++){
		if(marea[i-1]!=marea[i+p-1]){
			es=true;
			if(marea[i-1]=='.'){
				if(marea[i+p-1]=='1'){
					marea[i-1]='0';
				}
				else{
					marea[i-1]='1';
				}
				cambio=true;
			}
			else if(marea[i+p-1]=='.'){
				if(marea[i-1]=='1'){
					marea[i+p-1]='0';
				}
				else{
					marea[i+p-1]='1';
				}
				cambio=true;
			}
		}
		else{
			if(marea[i-1]=='.' && marea[i+p-1]=='.'){
				marea[i-1]='1';
				marea[i+p-1]='0';
				cambio=true;
			}
		}
	}
	
	if(cambio || es){
		for(int i=0;i<n;i++){
			if(marea[i]=='.'){
				marea[i]='1';
			}
		}
		
		cout<<marea;
		return 0;
	}
	cout<<"No";
		
	return 0;
}
