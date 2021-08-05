#include <bits/stdc++.h>
using namespace std;

int n, cont1=0, cont2=0;
char a;

int main(){
	
	cin>>n;
	
	while(n--){
		cin>>a;
		
		if(a=='A') cont1++;
		else cont2++;
	}
	
	if(cont1>cont2){
		cout<<"Anton";
	}
	else if(cont1<cont2){
		cout<<"Danik";
	}
	else{
		cout<<"Friendship";
	}
	
	return 0;
}
