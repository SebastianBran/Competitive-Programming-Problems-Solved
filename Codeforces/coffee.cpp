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

int t, c, p;
string tipo, tam, nombre;
int s, m, l, deliv, total;

int main(){
    IOS
	
	cin>>t;
	
	while(t--){
		cin>>c>>p;
		
		deliv = 100/p;
		map<string, map<string, int>> a;
		vector<pair<string, int>> b;
		
		fore(i, c){
			cin>>tipo>>s>>m>>l;
			a[tipo]["small"] = s;
			a[tipo]["medium"] = m;
			a[tipo]["large"] = l;
		}
		
		fore(i, p){
			cin>>nombre>>tam>>tipo;
			
			total = a[tipo][tam] + deliv;
			if(total%5 == 1) total--;
			else if(total%5 == 4) total++;
			
			b.push_back({nombre, total});
		}
		
		for(auto it : b){
			cout<<it.first<<" "<<it.second<<endl;
		}
	}
    
    return 0;
}
