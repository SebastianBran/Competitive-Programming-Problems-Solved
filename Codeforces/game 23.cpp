#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

int n, m, mul, cont=0;

int main(){
    IOS
	
	cin>>n>>m;
	
	if(m%n==0){
		mul=m/n;
		
		while(mul%2==0){
			mul/=2;
			cont++;
		}
		while(mul%3==0){
			mul/=3;
			cont++;
		}
		
		if(mul==1){
			cout<<cont;
		}
		else{
			cout<<-1;
		}
	}
	else{
		cout<<-1;
	}
    
    return 0;
}
