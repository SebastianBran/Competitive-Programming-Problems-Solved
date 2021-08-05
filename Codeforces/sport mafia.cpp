#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

ll n, k, sum;

int bs(ll i, ll j, int n, int x){
	ll mit=1;
	
	while(i<j){
		mit=(i+j)/2;
		sum=(mit*(mit+1))/2;
		
		if(sum<x+(n-mit)){
			i=mit+1;
		}
		else{
			j=mit;
		}
	}
	
	return (n-i);
}

int main(){
    IOS
 	
 	cin>>n>>k;
 	
 	cout<<bs(1, n, n, k);
	    
    return 0;
}
