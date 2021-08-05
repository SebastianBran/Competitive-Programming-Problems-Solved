#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

int n, m, aux, d;
ll cont=0, mini=1e18;
map<int,int> nums;
vector<pair<int,int>> nums2;
map<int,pair<int,int>> cant;

//NO ES SOLUCION

int main(){
    IOS

    cin>>n>>m>>d;
    
    fore(i, n*m){
    	cin>>aux;
    	nums[aux]++;
	}
	
	for(auto it : nums){
		nums2.push_back(make_pair(it.first, it.second));
	}
	
	for(int i=1;i<nums2.size();i++){
		if((nums2[i].first-nums2[i-1].first)%d==0){
			continue;
		}
		else{
			cout<<-1;
			return 0;
		}
	}
	
	/*cout<<endl;
	for(auto it : nums2){
		cout<<it.first<<" "<<it.second<<endl;
	}*/
	
	vector<ll> moves1(nums2.size(),0);
	vector<ll> moves2(nums2.size(),0); 
	
	for(int i=1;i<nums2.size();i++){
		cont+=((nums2[i].first-nums2[i-1].first)/d)*nums2[i-1].second;
		moves1[i]=moves1[i-1]+cont;
	}
	
	cont=0;
	
	for(int i=nums2.size()-2;i>=0;i--){
		cont+=((nums2[i+1].first-nums2[i].first)/d)*nums2[i+1].second;
		moves2[i]=moves2[i+1]+cont;
	}
	
	//cout<<endl;
	fore(i, moves1.size()){
		mini=min(mini,moves1[i]+moves2[i]);
	}
	
	cout<<mini;
    
    return 0;
}
