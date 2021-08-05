#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, d, aux;


int main(){
	
	cin>>n;
	
	while(true){
		n++;
		a = n/1000;
		aux = n%1000;
		b = aux/100;
		aux = n%100;
		c = aux/10;
		d = n%10;

		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
			cout<<n;
			return 0;
		}
	}
	
	return 0;
}
