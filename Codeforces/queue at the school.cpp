#include <bits/stdc++.h>
using namespace std;

int n, t;
string a;

int main(){
	
	cin>>n>>t;
	cin>>a;
	
	while(t--){
		for(int i=1;i<a.size();i++){
			if(a[i]=='G' && a[i-1]=='B'){
				swap(a[i], a[i-1]);
				i++;
			}
		}
	}
	
	cout<<a;
	
	return 0;
}
