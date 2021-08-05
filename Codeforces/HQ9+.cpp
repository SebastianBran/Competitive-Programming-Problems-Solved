#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

string a;

int main(){
    IOS

	cin>>a;
	
	fore(i,0,(int)a.size()){
		if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
			cout<<"YES";
			return 0;
		}
	}
	
	cout<<"NO";
	    
    return 0;
}
