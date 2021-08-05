#include <bits/stdc++.h>
 
using namespace std;
 
int a, b, s, minimo;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>a>>b>>s;
	
	minimo = abs(a) + abs(b);
	
	if(s>=minimo){
		if(minimo%2 == s%2){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
	}
	else{
		cout<<"No";
	}
		
	return 0;
}
