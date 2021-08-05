#include <bits/stdc++.h>

using namespace std;

int n, x, aux;
double total=0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin>>n>>x;
	
	while(n--){
		cin>>aux;
		total+=aux;
	}
	
	total = abs(total);
	
	cout<<ceil(total/x);
	
	return 0;
}
