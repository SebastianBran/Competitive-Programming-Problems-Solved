#include <bits/stdc++.h>
#define vi vector<int>

using namespace std;

vi nums = {1,4,5,8,9,20,23,26,27,30};
int n, mit;

void gen(){
	for(int i=4,j=0;i<14;i++,j++){
		nums[j]=i;
	}
}

int bs(int izquierda, int derecha, int n){
	while(izquierda<=derecha){
		mit = (izquierda + derecha)/2;
		
		if(n==nums[mit]){
			return mit;
		}
		else if(n<nums[mit]){
			derecha=mit-1;
		}
		else{
			izquierda=mit+1;
		}
	}
	
	return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	//gen();
	
	int t=5;
	
	while(t--){
		cin>>n;
		cout<<bs(0,9,n)<<"\n";
	}
	
	return 0;
}
