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

int n;

int main(){
    IOS
	
	cin>>n;
	
	int a[n], b[n];
	
	fore(i, n){
		cin>>a[i];
		b[a[i]-1] = i+1;
	}
	
	fore(i,n){
		cout<<b[i]<<" ";
	}
    
    return 0;
}
