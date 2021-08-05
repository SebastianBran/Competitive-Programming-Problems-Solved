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

int n, m, cont=0;

int main(){
    IOS
	
	cin>>n>>m;
	
	char a[n][m];
	int mayor[m], mejor[n];
	
	memset(mejor, 0, sizeof(mejor));
	memset(mayor, 0, sizeof(mayor));
	
	fore(i, n){
		cin>>a[i];
	}
	
	fore(j, m){
		fore(i, n){
			mayor[j]=max(mayor[j], a[i][j] - '0');
		}
	}
	
	fore(i, n){
		fore(j, m){

			if(mayor[j]==(a[i][j]-'0')){
				cont++;
				break;
			}
		}
	}
	
	cout<<cont;
    
    return 0;
}
