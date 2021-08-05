#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

int q, a, b, k, l;
vector<int> cuadrados;

void gen(){
    for(int i=1;i<=31623;i++){
        cuadrados.push_back(i*i);
    }
}

int bs(int izquierda, int derecha, int n, bool t){
    int mit;
    while(izquierda<derecha){
        mit=(izquierda+derecha)/2;

        if(cuadrados[mit]<n){
            izquierda=mit+1;
        }
        else{
            derecha = mit;
        }
	}
  	  
	if(cuadrados[izquierda]==n){
		return izquierda;
	}
	else if(t){
		return izquierda;
	}
	else{
		return izquierda-1;
	}
}

int main(){
    IOS

    gen();

    cin>>q;

    while(q--){
        cin>>a>>b;
        k = bs(0,31622,a, true);
		l = bs(0,31622,b, false);

		cout<<(l-k)+1<<endl;
    }
    
    return 0;
}
