#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define fore(i,n) for(int i=0;i<n;i++)

using namespace std;

string hora;
int horas, minutos;

int main(){
    IOS
	
	cin>>hora;
	
	horas=(hora[0]-'0')*10 + (hora[1]-'0');
	horas=horas%12;
	minutos=(hora[3]-'0')*10 + (hora[4]-'0'); 	
	
	cout<<30*horas+0.5*minutos<<" "<<minutos*6;
    
    return 0;
}
