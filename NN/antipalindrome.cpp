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

bool isPalin(string& sub){
	for(int i=0, j=sub.size()-1;i<sub.size()/2;i++, j--){
		if(sub[i]!=sub[j]){
			return false;
		}
	}
	return true;
}

int main(){
    IOS
    
    int maxi=0;
    string palabra, sub;
    
    cin>>palabra;

    fore(i,palabra.size()){
    	for(int j=1;i+j<=palabra.size();j++){
    		sub=palabra.substr(i,j);
    		if(!isPalin(sub)){
    			maxi=max(maxi, ((i+j)-i));
			}
		}
	}
	
	cout<<maxi;
    
    return 0;
}
