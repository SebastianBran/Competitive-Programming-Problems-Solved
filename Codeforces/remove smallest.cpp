#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int t, n;
bool es = true;

int main(){
    IOS
	
	cin>>t;
	
	while(t--){
		cin>>n;
		vector<int> a(n);
		
		fore(i, n){
			cin>>a[i];
		}
		
		sort(all(a));
		
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]>1){
				cout<<"NO"<<endl;
				es=false;
				break;
			}
		}
		
		if(es){
			cout<<"YES"<<endl;
		}
		
		es=true;
	}
    
    return 0;
}
