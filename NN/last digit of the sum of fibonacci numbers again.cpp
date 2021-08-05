#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int t, n, suma[30];

void gen(){
	suma[0]=1;
	fore(i,1,30){
		suma[i]=2*suma[i-1]+1;
	}
}

int bs(int i, int j, int n){
	int mit;
	
	while(i<j){
		mit=(i+j)/2;
		if(suma[mit]<n) i=mit+1;
		else j=mit;
	}
	
	return i;
}

int main(){
    IOS
	
	gen();
	
	cin>>t;
	
	while(t--){
		cin>>n;
		
		int x=bs(0,29,n);
		
		for(int i=x;i>=0;i--){
			if(n%suma[i]==0){
				cout<<n/suma[i]<<endl;
				break;
			}
		}
	}
    
    return 0;
}
