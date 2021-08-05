#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

int n, cant=0;
string cod;

int main(){
    IOS
	
	cin>>n;
	
	while(n--){
		cin>>cod;
		if(cod.find('+')!=string::npos){
			++cant;
		}
		else{
			--cant;
		}
	}
	
	cout<<cant;
	
    return 0;
}
