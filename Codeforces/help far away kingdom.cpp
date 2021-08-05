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

string num;
int indice; 

int main(){
    IOS
	
	cin>>num;
	
	fore(i, num.size()){
		if(num[i]=='.'){
			indice=i;
			break;
		}
	}
	
	if(num[indice-1]!='9'){
		if(num[indice+1]>='5'){
			num[indice-1]+=1;
		}
		
		cout<<num.substr(0,indice);
	}
	else{
		cout<<"GOTO Vasilisa.";
	}
    
    return 0;
}
