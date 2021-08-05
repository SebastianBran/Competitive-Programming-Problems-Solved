#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
typedef long long ll;
typedef vector<int> vi;

int n, punt1=0, punt2=0, aux;
deque<int> cards;
bool turno = true;

int main(){
    IOS

    cin>>n;
    
    while(n--){
    	cin>>aux;
    	cards.push_back(aux);
	}
	
	while(cards.size()>0){
		if(turno){
			if(cards.front()>cards.back()){
				punt1+=cards.front();
				cards.pop_front();
			}
			else{
				punt1+=cards.back();
				cards.pop_back();
			}
			turno=!turno;
		}
		else{
			if(cards.front()>cards.back()){
				punt2+=cards.front();
				cards.pop_front();
			}
			else{
				punt2+=cards.back();
				cards.pop_back();
			}
			turno=!turno;
		}
	}
	
	cout<<punt1<<" "<<punt2;
    
    return 0;
}
