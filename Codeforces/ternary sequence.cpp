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

int t;
ll x[3], y[3];

int main(){
    IOS
	
	cin>>t;
	
	ll total=0;
	ll aux;
	while(t--){
		cin>>x[0]>>x[1]>>x[2];
		cin>>y[0]>>y[1]>>y[2];

		if(y[2]>=x[0]){
			y[2]-=x[0];
			x[0]=0;
		}
		else{
			x[0]-=y[2];
			y[2]=0;
		}
			
		if(y[2]>=x[2]){
			y[2]-=x[2];
			x[2]=0;
		}
		else{
			x[2]-=y[2];
			y[2]=0;
		}

		total+=2*min(x[2],y[1]);
		total+=-2*min(y[2],x[1]);

		cout<<total<<endl;
		total=0;
	}

    return 0;
}
