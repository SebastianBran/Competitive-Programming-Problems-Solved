#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int n, m, c, t, aux;

int main(){
    IOS
    
    cin>>n>>m;
    
    vector<int> minut(n+1);
    
    minut[0]=0;
    for(int i=1;i<=n;i++){
    	cin>>c>>t;
    	minut[i]=minut[i-1]+c*t;
	}
	
	int pos;
	
	while(m--){
		cin>>aux;
		pos = lower_bound(all(minut),aux) - minut.begin();
		cout<<pos<<endl;
	}
    
    return 0;
}
