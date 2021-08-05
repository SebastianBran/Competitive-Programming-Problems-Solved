#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

//no es solucion

int n, t, c;
long long cant=0;
deque<pair<int,int>> products;
vector<int> totales;

bool cmp(pair<int,int>& a, pair<int,int>& b){
	if(a.second==b.second) return a.first > b.first;
	else return a.second < b.second;
}

int main(){
    IOS
	
	cin>>n;
	
	fore(i,n){
		cin>>t>>c;
		products.push_back(make_pair(t,c));
	}
	
	sort(products.begin(),products.end(), cmp);
	
	totales.push_back(products[0].second);
	
	for(int i=1;i<n;i++){
		totales.push_back(products[i].second + products[i-1].second);
	}
	
	pair<int,int> aux;
	
	while(products.size()!=0){
		if(products.back().firts!=0){
			if(totales[products.back().first-1]<){
				
			}
		}
		
		/*aux=products.front();
		cant+=aux.second;
		products.pop_front();
		fore(i,aux.first){
			if(products.size()!=0){
				products.pop_back();
			}
			else{
				break;
			}
		}*/
	}
	
	cout<<cant;
    
    return 0;
}
