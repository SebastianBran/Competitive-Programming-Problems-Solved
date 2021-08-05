#include <bits/stdc++.h>

using namespace std;

int n;

bool esPrimo(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n;
	
	if(n%2==0){
		for(int i=1;i<=1e3;i++){
			if(!esPrimo(n*i+1)){
				cout<<i;
				break;
			}
		}
	}
	else{
		if(n==1){
			cout<<3;
		}
		else{
			cout<<1;
		}
	}
	
	return 0;
}
