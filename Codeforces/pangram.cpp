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

string a;
int n, b[26];

int main(){
    IOS
	
	memset(b, 0, sizeof(b));
	
	cin>>n;
	cin>>a;
	
	for(auto it : a){
		it = toupper(it);
		b[it - 'A']++;
	}
	
	for(auto it : b){
		if(it == 0){
			cout<< "NO";
			return 0;
		}
	}
	
	cout<<"YES";
    
    return 0;
}

