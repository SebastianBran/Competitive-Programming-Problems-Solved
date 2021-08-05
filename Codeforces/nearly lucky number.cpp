#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

string n;
int lucky=0, other=0;

int main(){
    IOS
	
	cin>>n;
	
	fore(i,n.size()){
		if(n[i]=='7' || n[i]=='4'){
			lucky++;
		}
		else{
			other++;
		}
	}
	
	if(lucky==4 || lucky==7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
    
    return 0;
}
