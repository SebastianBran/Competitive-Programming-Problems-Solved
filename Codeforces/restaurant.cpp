#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

int n, l, r, cont=1;

bool cmp(pair<int,int>& a, pair<int,int> &b){
	if(a.second==b.second) return a.first<b.first;
	else return a.second<b.second;
}

int main(){
    IOS

	cin>>n;
	
	vector<pair<int, int>> rental(n);
	
	fore(i,n){
		cin>>l>>r;
		rental[i]=make_pair(l,r);
	}
	     
	sort(rental.begin(),rental.end(), cmp);
	
	pair<int,int> ant;
	
	ant=rental[0];
	
	for(int i=1;i<n;i++){
		if(ant.second<rental[i].first){
			cont++;
			ant=rental[i];
		}
	}
	
	cout<<cont;
	
    return 0;
}
