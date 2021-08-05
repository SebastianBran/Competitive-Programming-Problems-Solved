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

int n, k, aux, cont=0;
vector<map<int,int>> b;

int main(){
    IOS
    
    cin>>n>>k;

	b.resize(k);
	
	fore(i, n){
		cin>>aux;
		b[i%k][aux]++;
	}
	
	
	for(auto it : b){
		if(it.size()>1){
			int mini=100;
			for(auto it2 : it){
				mini=min(mini, it2.second);
			}
			cont+=mini;
		}
	}
	
	cout<<cont;
    
    return 0;
}
