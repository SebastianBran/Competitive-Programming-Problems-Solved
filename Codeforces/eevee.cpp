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

vector<string> pokemon = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
string p;
int n;
bool es = true;

int main(){
    IOS
	
	cin>>n>>p;
	
	for(auto it : pokemon){
		
		int l = min((int)it.size(), n);
		for(int i=0;i<l;i++){
			if(p[i]!=it[i] && p[i]!='.'){
				es=false;
				break;
			}
		}
		
		if(es && n==it.size()){
			cout<<it;
			break;
		}
		
		es = true;
	}
    
    return 0;
}
