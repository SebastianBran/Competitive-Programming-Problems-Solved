#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

int n, m, a, x;
long long total=0;

map<int,int> cant;

int main(){
    IOS
	
	cin>>n;
	
	while(n--){
		cin>>a>>x;
		if(cant.count(a)==0){
			cant[a]=x;
		}
		else{
			if(x>cant[a]){
				cant[a]=x;
			}
		}
	}
	
	cin>>m;
	
	while(m--){
		cin>>a>>x;
		if(cant.count(a)==0){
			cant[a]=x;
		}
		else{
				cant[a]=x;
			}
		}
	}
    
    for(auto it : cant){
    	total+=it.second;
	}
	
	cout<<total;
    
    return 0;
}
