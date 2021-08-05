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

int n;

int main(){
    IOS

    cin>>n;

    vector<pair<int,int>> a(n);

    fore(i,0,n){
        cin>>a[i].first;
        a[i].second=i+1;
    }

    sort(all(a), [](pair<int,int>& a, pair<int,int>& b){
        return a.first>b.first;
    });

    int j=0;
    fore(i,1,n+1){
        while(j<n){
            if(a[j].second<=i) cout<<a[j].first<<" ";
            else break;
            j++;
        }
        cout<<endl;
    }
    
    return 0;
}