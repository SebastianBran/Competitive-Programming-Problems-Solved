#include <bits/stdc++.h>

using namespace std;

int n, a, b, c=0, aux, cant=0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n>>a>>b;
	
	while(n--){
		cin>>aux;
		
		if(aux==1){
			if(a>0){
				a--;
			}
			else if(b>0){
				b--;
				c++;
			}
			else if(c>0){
				c--;
			}
			else{
				cant++;
			}
		}
		else{
			if(b>0){
				b--;
			}
			else{
				cant+=2;
			}
		}
	}	
	
	cout<<cant;
		
	return 0;
}
