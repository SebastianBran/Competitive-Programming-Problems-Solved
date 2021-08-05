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

int n;

int main(){
    IOS
	
	cin>>n;
	
	vector<int> a(n);
	
	fore(i,0,n) cin>>a[i];
	
	int cont=1, maxi=1;
	
	fore(i,1,n){
		if(a[i-1]>a[i]) cont=1;
		else cont++;
		
		maxi=max(cont,maxi);
	}
	
	cout<<maxi;
    
    return 0;
}
