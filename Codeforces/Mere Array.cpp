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

int t, n;

int main(){

    cin>>t;

    while(t--){
        cin>>n;

        vi a(n);
        fore(i,0,n) cin>>a[i];

        int mini = *min_element(all(a));

        vi b;
        fore(i,0,n){
            if(a[i]%mini==0) b.pb(a[i]);
        }

        ordenar(b);

        int j=0;
        fore(i,0,n){
            if(a[i]%mini==0){
                a[i]=b[j];
                j++;
            }
        }

        if(is_sorted(all(a))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}