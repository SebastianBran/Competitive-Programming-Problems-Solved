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

long long n, k;

int main(){
    IOS
	
	cin>>n>>k;
	
	long long mit = ceil((double)n/2);
	
	if(k<=mit){
		cout<<(long long)k*2-1;
	}
	else{
		cout<<(long long)(k-mit)*2;
	}
    
    return 0;
}
