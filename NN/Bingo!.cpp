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

int n, b;

int main(){
    IOS

    while(true){
        cin>>n>>b;
        if(n==0 && b==0) return 0;

        set<int> t;
        vector<int> nums(b);
        fore(i,0,b){
            cin>>nums[i];
        }

        fore(i,0,b-1){
            fore(j,i+1,b){
                t.insert(abs(nums[i]-nums[j]));
            }
        }

        if(t.size()==n) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }

    return 0;
}