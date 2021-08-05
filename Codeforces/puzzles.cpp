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

int n, m;

int main(){
    IOS

	cin>>n>>m;
	
	vi a(m);
	
	fore(i,0,m) cin>>a[i];
	
	ordenar(a);
	
	int mini=1e3+1;
	
	fore(i,n-1,m){
		if(a[i]-a[i-n+1]<mini) mini=a[i]-a[i-n+1];	
	}
	
	cout<<mini;
    
    return 0;
}
