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

int t, n, maxi=0;

int main(){
    IOS
	
	cin>>t;
	
	while(t--){
		cin>>n;
		
		vi a(n);
		map<int, int> b;
		
		fore(i, n){
			cin>>a[i];
		}
		
		map<int,int> aux;
		map<int,set<int>> aux2;
		
		fore(i, n){
			for(int j=i+1;j<n;j++){
				if(aux.count(a[i]+a[j])>0){
					if(!aux2[a[i]+a[j]].count(i) && !aux2[a[i]+a[j]].count(j)){
						aux[a[i]+a[j]]++;
						aux2[a[i]+a[j]].insert(i);
						aux2[a[i]+a[j]].insert(j);
					}
					else{
						continue;
					}
				}
				else{
					aux[a[i]+a[j]]++;
					aux2[a[i]+a[j]].insert(i);
					aux2[a[i]+a[j]].insert(j);
				}
			}
		}
		
		for(auto it : aux){
			maxi=max(maxi, it.second);
		}
		
		cout<<maxi<<endl;
		maxi=0;
	}
    
    return 0;
}
