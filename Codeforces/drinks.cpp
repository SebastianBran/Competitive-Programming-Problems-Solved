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

int n;
double aux, cont=0;

int main(){
    IOS
	
	cin>>n;
	
	fore(i,n){
		cin>>aux;
		
		cont+=(double)(aux/100);
	}
	
	cout<<fixed;
	cout<<setprecision(12)<<(double)(cont/n)*100;
    
    return 0;
}
