#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

int t, n;

int main(){
    IOS
    
	cin>>t;
	
	while(t--){
		cin>>n;
		
		if(n<=2){
			cout<<0<<endl;
		}
		else{
			cout<<n-2<<endl;
		}
	}
    
    return 0;
}
