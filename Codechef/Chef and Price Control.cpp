#include <bits/stdc++.h>

using namespace std;

int t, n, k, aux, total=0;

int main(){

    cin>>t;

    while(t--){
        cin>>n>>k;

        while(n--){
            cin>>aux;
            if(aux>k) total+=aux-k;
        }

        cout<<total<<endl;
        total=0;
    }

    return 0;
}