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

int n, m, cont=0;
char aux;
bool borrar=false;

int main(){
    IOS
    
    cin>>n>>m;
    
    vector<vector<char>> a(m);
    
    fore(i, n){
    	fore(j, m){
    		cin>>aux;
    		a[j].pb(aux);
		}
	}
	
	fore(j, a.size()){
		fore(i,n-1){
			if(a[j][i]>a[j][i+1]){
				borrar=true;
				cont++;
				break;
			}
		}
		
		if(borrar){
			a.erase(a.begin() + j);
			j--;
			borrar=false;
		}
	}
	
	cout<<cont;
    
    return 0;
}
