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

string a = "I hate ", b = "it ", c = "that I love ", d="that I hate ";
int n;

int main(){
    IOS
	
	cin>>n;
	
	cout<<a;
	
	fore(i, n-1){
		if(i%2){
			cout<<d;
		}
		else{
			cout<<c;
		}
	}
	
	cout<<b;
    
    return 0;
}
