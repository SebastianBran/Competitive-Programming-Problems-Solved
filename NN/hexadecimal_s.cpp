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

const int MAXN = 47;
int fibo[MAXN], c;

void gen(){
	fibo[0]=0;
	fibo[1]=1;
	
	for(int i=2;i<MAXN;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}

int bs(int i, int j, int n){
	int mit;
	
	while(i<j){
		mit=(i+j)/2;
		
		if(fibo[mit]<n){
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
	
	gen();
	
	cin>>c;
	
	switch(c){
		case 0:
			cout<<"0 0 0";
			break;
		case 1:
			cout<<"1 0 0";
			break;
			
		case 2:
			cout<<"1 1 0";
			break;
			
		default:
			int indice = bs(0, MAXN-1, c);
			cout<<fibo[indice-1]<<" "<<fibo[indice-3]<<" "<<fibo[indice-4];
			break;
	}
	
    return 0;
}
