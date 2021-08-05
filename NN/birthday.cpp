#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()

using namespace std;

vector<int> a;
deque<int> b;
int n, aux;

int main(){
    IOS
	
	cin>>n;
	
	fore(i,n){
		cin>>aux;
		a.push_back(aux);
	}
	
	sort(a.begin(), a.begin()+n);
	
	for(int i=n-1;i>=0;--i){
		if(i%2==0){
			b.push_back(a[i]);
		}
		else{
			b.push_front(a[i]);
		}
	}
	
	fore(i,n){
		cout<<b[i]<<" ";
	}
    
    return 0;
}

