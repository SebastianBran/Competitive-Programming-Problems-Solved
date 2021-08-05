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

int t, n, cont=1;
string a;

int main(){
    IOS
    
    cin>>t;

	while(t--){
		cin>>n;
		cin>>a;
		
		if(a[0]==a[n-1] || (a[0]=='>' && a[n-1]=='<')){
			cout<<0<<endl;
		}
		else{
			for(int i=1, j=n-2; i<n;i++,j--){
				if(a[i]==a[i-1] && a[j]==a[j+1]) cont++;
				else break;
			}
			
			cout<<cont<<endl;
		}
		
		cont=1;
	}
    
    return 0;
}
