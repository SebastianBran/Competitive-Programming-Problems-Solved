#include <bits/stdc++.h>
using namespace std;

string a, b;

int main(){
	
	cin>>a>>b;
	
	reverse(b.begin(),b.end());
	
	if(a==b){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}
