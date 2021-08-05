#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

int n, k, l, puntaje=0, cartas=1;
deque<pair<int,int>> arr;

bool cmp(pair<int,int>& a, pair<int,int>& b){
	if(a.second==b.second) return a.first>b.first;
	else return a.second>b.second;
}

int main(){
    IOS
    
    cin>>n;
    
	fore(i,n){
		cin>>k>>l;
		arr.push_back(make_pair(k,l));
	}
	
	sort(all(arr), cmp);
    
    while(arr.size()>0 && cartas>0){
    	puntaje+=arr.front().first;
    	cartas--;
    	cartas+=arr.front().second;
    	arr.pop_front();
	}
	
	cout<<puntaje;
    
    return 0;
}
