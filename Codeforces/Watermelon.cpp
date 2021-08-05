#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, n;

    cin>>n;

    x=n-2;
    y=n-x;

    if(x%2==0 && y%2==0 && n>2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}