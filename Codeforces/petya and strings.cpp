#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

string a, b;
int cont1=0, cont2=0;

int main(){
    IOS

    cin>>a>>b;
    
    for(int i=0;i<a.size();i++){
    	a[i]=tolower(a[i]);
    	b[i]=tolower(b[i]);
    	if(a[i]==b[i]){
    		continue;
		}
		else if(a[i]<b[i]){
			cout<<-1;
			return 0;
		}
		else{
			cout<<1;
			return 0;
		}
	}
	
	cout<<0;
    
    return 0;
}
