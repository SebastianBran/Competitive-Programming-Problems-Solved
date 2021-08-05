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

string a;

bool isPalindrome(string b){
    string aux = b;
    reverse(all(aux));

    return aux == b;
}

int main(){
    IOS

    while(getline(cin, a)){
        if(a == "DONE") break;

        string b;

        for(auto  it : a){
            if((it >= 'a' && it <= 'z') || (it >= 'A' && it <= 'Z')){
                b += tolower(it);
            }
        }

        if(isPalindrome(b)) cout<<"You won't be eaten!"<<endl;
        else cout<<"Uh oh.."<<endl;
    }

    return 0;
}