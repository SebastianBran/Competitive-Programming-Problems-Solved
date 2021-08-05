#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()

using namespace std;

string palabra;
vector<int>nums;

int main(){
    IOS
	
	cin>>palabra;
	
	fore(i,palabra.size()){
		if(palabra[i]=='+'){
			palabra.replace(i,1,"");
		}
	}
    
    fore(i,palabra.size()){
    	nums.push_back(palabra[i]-'0');
	}
	
	sort(all(nums));
	
	fore(i,nums.size()-1){
		cout<<nums[i]<<"+";
	}
    cout<<nums[nums.size()-1];
    
    return 0;
}
