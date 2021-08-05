#include <bits/stdc++.h>
using namespace std;

int n, p, q, cont=0;

int main(){
	
	cin>>n;
	
	while(n--){
		cin>>p>>q;
		if((q-p)>=2) cont++;
	}
	
	cout<<cont;
	
	return 0;
}
