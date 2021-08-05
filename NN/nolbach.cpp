                                 #include <bits/stdc++.h>

using namespace std;

int n, k, cont=0;
vector<int> primos;
vector<int> suma;
vector<bool> nums(1e3,true);

void gen(){
	nums[0]=false;
	nums[1]=false;
	for(int i=2;i<1e3;i++){
		if(!nums[i]) { 
			continue;
		}
		else{
			primos.push_back(i);
		}
		
		for(int j=2;i*j<1e3;j++){
			nums[i*j]=false;
		}
	}
}

void sp(){
	for(int i=0;i<primos.size()-1;i++){
		suma.push_back(primos[i]+primos[i+1]);
	}
}

bool bs(int izquierda, int derecha, int n){
	int mit;
	
	while(izquierda<derecha){
		mit=(izquierda+derecha)/2;
		
		if(suma[mit]<n){
			izquierda = mit+1;
		}
		else{
			derecha=mit;
		}
	}
	
	if(suma[izquierda]==n){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	gen();
	sp();
	
	cin>>n>>k;
	
	for(int i=0;primos[i]<=n;i++){
		if(bs(0,suma.size(),primos[i]-1)){
			cont++;
		}
	}
	
	if(cont>=k){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}
