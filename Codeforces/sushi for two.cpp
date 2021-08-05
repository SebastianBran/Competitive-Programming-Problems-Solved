#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()

using namespace std;

int n, aux, aux2=0, cont=1, maxi=0;
vector<int> sushi;

int main(){
    IOS

	cin>>n;
	
	fore(i, n){
		cin>>aux;
		if(aux!=aux2){
			aux2=aux;
			sushi.push_back(cont);
			cont=1;
		}
		else{
			cont++;
		}
	}
	
	sushi.push_back(cont);
	
	for(int i=1;i<sushi.size()-1;i++){
		maxi = max(maxi, min(sushi[i], sushi[i+1])*2);
	}
	
	cout<<maxi;
	
    return 0;
}
