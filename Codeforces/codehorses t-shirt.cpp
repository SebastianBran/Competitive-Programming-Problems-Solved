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

map<string,int> polos;
string aux;
int n;

int main(){
    IOS
    
    cin>>n;
	
	fore(i,n){
		cin>>aux;
		polos[aux]++;
	}
	
	int cont=0;
	
	fore(i,n){
		cin>>aux;
		if(polos[aux]==0){
			cont++;
		}
		else{
			polos[aux]--;
		}
	}
    
    cout<<cont;
    return 0;
}
