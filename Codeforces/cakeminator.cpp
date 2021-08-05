#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

const int MAXN = 10;
int r, c, tr=0, tc=0, total=0;
char cake[MAXN][MAXN];
set<int> filas;
set<int> columnas;

int main(){
    IOS
	
	cin>>r>>c;
	
	fore(i, r){
		fore(j, c){
			cin>>cake[i][j];
			if(cake[i][j]=='S'){
				filas.insert(i);
				columnas.insert(j);
			}
		}
	}
	
	fore(i, c){
		if(columnas.count(i)){
			continue;
		}
		else{
			total+=r;
			tc++;
		}
	}

	
	fore(i, r){
		if(filas.count(i)){
			continue;
		}
		else{
			total+=c;
			tr++;
		}
	}
	
	cout<<total-(tr*tc);
    
    return 0;
}
