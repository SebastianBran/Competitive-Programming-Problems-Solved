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

int k, l, m, n, d, cont=0;

int main(){
    IOS
	
	cin>>k>>l>>m>>n>>d;
	
	vector<bool> a(d,false);
	
	for(int i=k;i<=d;i+=k){
		a[i-1]=true;
	}
	
	for(int i=l;i<=d;i+=l){
		a[i-1]=true;
	}
	
	for(int i=m;i<=d;i+=m){
		a[i-1]=true;
	}
	
	for(int i=n;i<=d;i+=n){
		a[i-1]=true;
	}
	
	fore(i,d){
		if(a[i]) cont++;
	}
    
    cout<<cont;
    
    return 0;
}
