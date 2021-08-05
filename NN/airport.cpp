#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()

using namespace std;

const int MAXN = 3162278;
int t, k, l;
long long a, b;
vector<long long> cuadrados(MAXN);

void gen(){
	for(long long i=1;i<=MAXN;i++){
		cuadrados[i]=i*i;
	}
}

int bs(int izquierda, int derecha, long long n, bool t){
	int mit;
	while(izquierda<derecha){
		mit=(izquierda+derecha)/2;
		
		if(cuadrados[mit]<n){
			izquierda=mit+1;
		}
		else{
			derecha=mit;
		}
	}
	
	if(cuadrados[izquierda]==n){
		return izquierda;
	}
	else if(t){
		return izquierda;
	}
	else{
		return izquierda-1;
	}
}

int main(){
    IOS
    gen();
    
    cin>>t;
    
    while(t--){
    	cin>>a>>b;
    	
    	k=bs(0, MAXN, a, true);
    	l=bs(0, MAXN, b, false);
    	
    	cout<<(l-k)+1<<endl;
	}

    return 0;
}
