#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

int indice=0;
string hello = "hello";
string palabra;

int main(){
    IOS

    cin>>palabra;
    
    fore(i,palabra.size()){
    	if(hello[indice]==palabra[i]){
    		indice++;
		}
		if(indice==5){
			cout<<"YES";
			return 0;
		}
	}
	
	cout<<"NO";
    
    return 0;
}
