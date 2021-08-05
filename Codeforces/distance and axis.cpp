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

int t, n, k;

int main(){
    IOS

	cin>>t;
	
	while(t--){
		cin>>n>>k;
		
		if(n<=k){
			cout<<k-n<<endl;
		}
		else{
			if((n+k)%2) cout<<1<<endl;
			else cout<<0<<endl;
		}
	}
    
    return 0;
}
