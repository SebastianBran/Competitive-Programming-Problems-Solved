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

int n, menor=100, mayor=0;
int pos1, pos2;

int main(){
    IOS
	
	cin>>n;
	
	vi a(n);
	
	fore(i,n){
		cin>>a[i];
	}
	
	fore(i,n){
		if(a[i]>mayor){
			pos2=i+1;
			mayor=a[i];
		}
	}
    
    for(int i=n-1;i>=0;i--){
    	if(a[i]<menor){
    		pos1=i+1;
    		menor=a[i];
    	}
	}
	
	if(pos2>pos1){
		cout<<(pos2-1) + (n-pos1) - 1;
	}
	else{
		cout<<(pos2-1) + (n-pos1);
	}
    
    return 0;
}
