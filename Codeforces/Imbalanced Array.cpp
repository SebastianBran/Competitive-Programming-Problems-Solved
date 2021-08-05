#include <bits/stdc++.h>

using namespace std;

long long mergeMax(vector<int>& L, vector<int>& R) {
    long long ans = 0;
    int pt1 = 0;
    for (int i = 0; i < L.size(); i++) {
        while (pt1 < R.size() && R[pt1] <= L[i]) {
            pt1++;
        }
        ans += (long long)pt1 * (long long)L[i];
    }
    int pt2 = 0;
    for (int i = 0; i < R.size(); i++) {
        while (pt2 < L.size() && L[pt2] < R[i]) {
            pt2++;
        }
        ans += (long long)pt2 * (long long)R[i];
    }
    return ans;
}

void getMax(vector<int>& v) {
    for (int i = 1; i < v.size(); i++) {
        v[i] = max(v[i], v[i - 1]);
    }
}

long long solveMax(vector<int>& v) {
    if (v.size() == 1) return v[0];

    int len = v.size();
    vector<int> L(v.begin(), v.begin() + len / 2);
    vector<int> R(v.begin() + len / 2, v.end());

    long long l = solveMax(L);
    long long r = solveMax(R);

    reverse(L.begin(), L.end());
    getMax(L);
    getMax(R);
    return l + r + mergeMax(L, R);
}

long long mergeMin(vector<int>& L, vector<int>& R) {
    long long ans = 0;
    int pt1 = 0;
    for (int i = 0; i < L.size(); i++) {
        while (pt1 < R.size() && R[pt1] >= L[i]) {
            pt1++;
        }
        ans += (long long)pt1 * (long long)L[i];
    }
    int pt2 = 0;
    for (int i = 0; i < R.size(); i++) {
        while (pt2 < L.size() && L[pt2] > R[i]) {
            pt2++;
        }
        ans += (long long)pt2 * (long long)R[i];
    }
    return ans;
}

void getMin(vector<int>& v) {
    for (int i = 1; i < v.size(); i++) {
        v[i] = min(v[i], v[i - 1]);
    }
}

long long solveMin(vector<int>& v) {
    if (v.size() == 1) return v[0];

    int len = v.size();
    vector<int> L(v.begin(), v.begin() + len / 2);
    vector<int> R(v.begin() + len / 2, v.end());

    long long l = solveMin(L);
    long long r = solveMin(R);

    reverse(L.begin(), L.end());
    getMin(L);
    getMin(R);
    return l + r + mergeMin(L, R);
}


int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << solveMax(v) - solveMin(v);

    return 0;
}