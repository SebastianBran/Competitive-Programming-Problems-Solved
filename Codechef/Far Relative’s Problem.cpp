#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define fore(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
#define pb push_back
#define ordenar(a) sort(all(a))
typedef long long ll;
typedef vector<int> vi;

int t, l, r;
char sex;

int main(){
    IOS

    cin>>t;

    vector<pair<int,int>> a(367,{0,0});

    while(t--){
        cin>>sex>>l>>r;

        if(sex=='F'){
            a[l-1].first++;
            a[r].first--;
        }
        else{
            a[l-1].second++;
            a[r].second--;
        }
    }

    fore(i,1,367){
        a[i].first+=a[i-1].first;
        a[i].second+=a[i-1].second;
    }

    int maxi=0;
    fore(i,0,367){
        maxi=max(maxi,min(a[i].first,a[i].second)*2);
    }

    cout<<maxi;
    
    return 0;
}