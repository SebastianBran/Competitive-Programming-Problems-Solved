#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

const int MAXN = 51;
int scores[MAXN];
int n, k, cont=0;

int main(){
    IOS
	
	cin>>n>>k;
    
    fore(i,n){
    	cin>>scores[i];
    }
    
    fore(i,n){
    	if(scores[i]>=scores[k-1] && scores[i]!=0){
    		cont++;
		}
		else{
			break;
		}
	}
	
	cout<<cont;
    
    return 0;
}
