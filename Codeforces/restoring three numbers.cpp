#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

int aux;
vector<int> nums;

int main(){
    IOS
	
	fore(i,4){
		cin>>aux;
		nums.push_back(aux);
	}	
	
	sort(nums.begin(),nums.end());
	
	fore(i,3){
		cout<<nums[3]-nums[i]<<" ";
	}
    
    return 0;
}
