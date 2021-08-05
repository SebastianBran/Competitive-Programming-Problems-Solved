#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

const int MAXN = 1e5+1;
int n, m, aux;
vi total(MAXN, 0);

int bs(int i, int j, int n){
	int mit;
	
	while(i<j){
		mit=(i+j)/2;
		
		if(total[mit]<n){
			i=mit+1;
		}
		else{
			j=mit;
		}
	}
	
	return i;
}

int main(){
    IOS
	
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>aux;
		total[i]=aux+total[i-1];
	}
	
	cin>>m;
	
	while(m--){
		cin>>aux;
		cout<<bs(1,n,aux)<<endl;
	}
    
    return 0;
}
