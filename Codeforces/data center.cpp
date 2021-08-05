#in clude <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

int n, aux=0;

int main(){
    IOS
	
	cin>>n;
	
	aux=(int)sqrt(n);
	while(n%aux!=0){
		aux--;
	}
	cout<<aux*2+(n/aux)*2;
	
    return 0;
}
