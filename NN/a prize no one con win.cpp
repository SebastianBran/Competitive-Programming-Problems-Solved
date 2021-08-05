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

int n, x;

int main(){
    IOS
	
	cin>>n>>x;
	
	int a[n];
	
	fore(i, n){
		cin>>a[i];
	}
	
	sort(a, a + n);
	
	for(int i=1;i<n;i++){
		if(a[i]+a[i-1] > x){
			cout<<i;
			return 0;
		}
	}
		 
	cout<<n;
    
    return 0;
}

