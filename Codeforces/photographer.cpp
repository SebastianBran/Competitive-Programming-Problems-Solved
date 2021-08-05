#include <bits/stdc++.h>

using namespace std;

int n, d, a, b, x, y, cant=0;
vector<pair<int,int>> clientes;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n>>d;
	cin>>a>>b;
	
	for(int i=0;i<n;i++){
		cin>>x>>y;
		clientes.push_back(make_pair(x*a+y*b,i+1));
	}	

	sort(clientes.begin(),clientes.end());
		
	for(int i=0;i<n;i++){
		if(clientes[i].first<=d){
			d-=clientes[i].first;
			cant++;
		}
		else{
			break;
		}
	}
	
	cout<<cant<<"\n";
	for(int i=0;i<cant;i++){
		cout<<clientes[i].second<<" ";
	}
	
	return 0;
}
