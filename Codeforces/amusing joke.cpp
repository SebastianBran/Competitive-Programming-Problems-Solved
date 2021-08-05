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

string a, b, c;
map<char, int> d;

int main(){
    IOS
	
	cin>>a>>b>>c;
	
	fore(i, c.size()){
		d[c[i]]++;
	}
	
	fore(i, a.size()){
		if(d.count(a[i])>0){
			d[a[i]]--;
			if(d[a[i]]==0){
				d.erase(a[i]);
			}
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	
	fore(i, b.size()){
		if(d.count(b[i])>0){
			d[b[i]]--;
			if(d[b[i]]==0){
				d.erase(b[i]);
			}
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	
	if(d.size()==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
    
    return 0;
}
