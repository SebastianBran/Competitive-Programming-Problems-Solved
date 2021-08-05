#include <bits/stdc++.h>
using namespace std;

int n;

bool esPrimo(int x){
	for(int i=2;i<=(int)sqrt(x);i++){
		if(x%i==0) return false;
	}
	
	return true;
}

int main(){
	
	cin>>n;
	
	for(int i=4;i<=(int)n/2;i++){
		if(!esPrimo(i) && !esPrimo(n-i)){
			cout<<i<<" "<<n-i;
			return 0;
		}
	}
	
	
	return 0;
}
