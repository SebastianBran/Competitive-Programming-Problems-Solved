#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

int n;
char let;
set<char> letras;

int main(){
    IOS

    cin>>n;
    
    fore(i,n){
    	cin>>let;
    	letras.insert(let);
	}
	
	if(n<=26){
		cout<<n-letras.size();
	}
    else{
    	cout<<-1;
	}
    return 0;
}
