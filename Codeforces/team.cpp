#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

int n, a, b, c, cont=0;

int main(){
    IOS
	
	cin>>n;
	
	while(n--){
		cin>>a>>b>>c;
		if(a+b+c>=2){
			cont++;
		}
	}
	
	cout<<cont;
    
    return 0;
}
