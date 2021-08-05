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

string a, b;

int main(){
    IOS
	
	cin>>a>>b;
	
	fore(i, a.size()){
		if(a[i]==b[i]) cout<<"0";
		else cout<<"1";
	}
    
    return 0;
}
