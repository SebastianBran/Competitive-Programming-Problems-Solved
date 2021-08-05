#include <bits/stdc++.h>

using namespace std;

long long n, total, totalP=0, mit, k;

int bs(int izquierda, int derecha, long long n){
	while(izquierda<=derecha){
		mit = (izquierda+derecha)/2;
		
		totalP=total-(mit*(mit+1))/2;
		
		if(totalP<=n && totalP+mit>=n){
			if(n-totalP>0 && n-totalP<=mit){
				return k-mit;
			}
			else if(n-totalP==0){
				return k-mit-1;
			}
		}
		else if(totalP<n && totalP+mit<n){
			derecha = mit-1;
		}
		else if(totalP>n && totalP+mit>n){
			izquierda = mit+1;
		}
	}
	
	return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n>>k;
	
	total = ((k-1)*k)/2;
	
	if((n-1)<=total){
		cout<<bs(1,k-1,n-1);
	}
	else{
		cout<<-1;
	}
	
	return 0;
}
