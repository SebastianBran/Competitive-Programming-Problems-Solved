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

int n, aux1, aux2=0, cont=0;

int main(){
    IOS
	
	cin>>n;
	
	while(n--){
		cin>>aux1;
		if(aux1!=aux2){
			aux2=aux1;
			cont++;
		}
	}
	
	cout<<cont;
    
    return 0;
}
