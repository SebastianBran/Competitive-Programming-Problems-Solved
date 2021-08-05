#include <bits/stdc++.h>

using namespace std;

int t, a, b;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>t;
	
	while(t--){
		cin>>a>>b;
		
		if(a==b){
			cout<<"0\n";
		}
		else if(a>b){
			if(abs(a-b)%2==0){
				cout<<"1\n";
			}
			else{
				cout<<"2\n";
			}
		}
		else if(a<b){
			if(abs(a-b)%2==0){
				cout<<"2\n";
			}
			else{
				cout<<"1\n";
			}
		}
	}
		
	return 0;
}
