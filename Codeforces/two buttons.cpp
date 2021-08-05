#include <bits/stdc++.h>

using namespace std;

int n, m, cont=0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n>>m;
	
	if(n>=m){
		cout<<n-m;
	}
	else{
		while(m!=n){
			if(m%2==1 && n<m){
				m++;
				cont++;
			}
			else if(m%2==0 && n<m){
				m/=2;
				cont++;
			}
			else if(n>m){
				cont+=(n-m);
				m+=(n-m);
			}
		}
		cout<<cont;
	}

	return 0;
}
