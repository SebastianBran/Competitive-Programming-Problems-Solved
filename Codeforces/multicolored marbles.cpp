#include <bits/stdc++.h>

using namespace std;

vector<int> primos;
vector<bool> nums(1e6,true);
int n;
long long total=1;

// no es solucion

void gen(){
	nums[0]=false;
	nums[1]=false;
	for(int i=2;i<1e6;i++){
		if(!nums[i]) { continue; }
		else { primos.push_back(i); }
		for(int j=2;i*j<1e6;j++){
			nums[i*j]=false;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	gen();
	
	cin>>n;
	
	for(int i=0;i<n-1;i++){
		total = ((total+primos[i])%(1000000007));
	}
	
	cout<<total;
	
	return 0;
}
