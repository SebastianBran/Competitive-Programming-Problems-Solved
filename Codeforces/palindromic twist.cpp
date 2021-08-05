#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

string palabra;
int t, n;
bool es=true;

int main(){
    IOS
	
	cin>>t;
	
	while(t--){
		cin>>n;
		cin>>palabra;
		
		es = true;
		
		fore(i,n/2){
			if(palabra[i]==palabra[n-(i+1)]){
				continue;
			}
			else if(min(palabra[i]-'a'+1,palabra[n-(i+1)]-'a'+1)==max(palabra[i]-'a'-1,palabra[n-(i+1)]-'a'-1)){
				continue;
			}
			else{
				es = false;
				break;
			}
		}
		
		if(es){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
    
    
    return 0;
}
