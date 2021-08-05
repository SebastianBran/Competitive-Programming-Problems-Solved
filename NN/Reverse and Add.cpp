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

int t, cont;
ll n, num;

ll rever(){
    string a = to_string(n);
    reverse(all(a));

    ll aux = stoll(a);

    return aux;
}

bool isPalindrome(){
    string a = to_string(num);
    string b = a;
    reverse(all(b));

    if(a == b) return true;
    return false;
}

int main(){
    IOS
    
    cin>>t;

    while (t--) {
        cont = 0;
        cin>>n;

        do{

            cont++;
            num = n + rever();
            n = num;

        } while (!isPalindrome());

        cout << cont << " " << num << endl;
    }

    return 0;
}