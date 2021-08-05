#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()

using namespace std;

const int MAXN = 51;
int n, m, a, b, aux, mini=2501;
int jardin[MAXN][MAXN];

int main(){
    IOS
	
	memset(jardin, 0, sizeof(jardin));
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>aux;
			jardin[i][j]=aux+jardin[i][j-1];
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			jardin[i][j]+=jardin[i-1][j];
		}
	}
	
	cin>>a>>b;
	
	for(int i=a;i<=n;i++){
		for(int j=b;j<=m;j++){
			aux=jardin[i][j]-jardin[i-a][j]-jardin[i][j-b]+jardin[i-a][j-b];
			mini=min(mini, aux);
		}
	}
	
	for(int i=b;i<=n;i++){
		for(int j=a;j<=m;j++){
			aux=jardin[i][j]-jardin[i-b][j]-jardin[i][j-a]+jardin[i-b][j-a];
			mini=min(mini, aux);
		}
	}
	
	cout<<mini;
    
    return 0;
}

