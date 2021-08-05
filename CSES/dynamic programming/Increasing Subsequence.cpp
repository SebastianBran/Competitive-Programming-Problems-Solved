#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int n;

int main() {
    IOS

    cin >> n;
    vector<int> a(n);
    vector<int> L(2 * 1e5 + 5); int len = 0;

    for(auto &it : a) cin >> it;

    L[0] = -1;
    for(int i = 0; i < n; i++) {
        int l = 0, r = len;
        while(l < r) {
            int mit = l + (r - l) / 2;
            if(L[mit] < a[i]) l = mit + 1;
            else r = mit;
        } 
        
        if(L[l] < a[i]) L[len++] = a[i];
        else L[l] = a[i];
    }

    cout << len << endl;

    return 0;
}