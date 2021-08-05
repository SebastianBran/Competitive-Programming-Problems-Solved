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

int t, n, min1= 1e9+1, min2=1e9+1;
ll cont=0;

int main(){
    IOS
	
	cin>>t;
	
	while(t--){
		cin>>n;
		
		vector<int> a(n);
		vector<int> b(n);
		
		fore(i,n){
			cin>>a[i];
		}
		fore(i,n){
			cin>>b[i];
		}
		
		fore(i,n){
			if(a[i]<min1){
				min1=a[i];
			}
		}
		fore(i,n){
			if(b[i]<min2){
				min2=b[i];
			}
		}
		
		fore(i,n){
			cont+=max(a[i]-min1, b[i]-min2);
		}
		
		cout<<cont<<endl;
		cont=0;
		min1=min2=1e9+1;
	}
    
    return 0;
}
