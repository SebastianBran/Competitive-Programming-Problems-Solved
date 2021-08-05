#include <bits/stdc++.h>
 
using namespace std;
 
int n, aux, ta=0, tb=0, cantA=0,cantB=0;
deque<int> tiempos;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n;
	
	while(n--){
		cin>>aux;
		tiempos.push_back(aux);
	}	
	
	while(tiempos.size()){
		if(ta==tb || ta<tb){
			ta += tiempos.front();
			tiempos.pop_front();
			cantA++;
		}
		else if(ta>tb){
			tb+=tiempos.back();
			tiempos.pop_back();
			cantB++;
		}
	}
	
	cout<<cantA<<" "<<cantB;
		
	return 0;
}
