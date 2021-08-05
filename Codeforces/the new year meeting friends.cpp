#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

vector<int> a(3);

int main(){
    IOS
	
	cin>>a[0]>>a[1]>>a[2];
	
	sort(a.begin(),a.end());
	
	cout<<(a[2]-a[1])+(a[1]-a[0]);
    
    return 0;
}
