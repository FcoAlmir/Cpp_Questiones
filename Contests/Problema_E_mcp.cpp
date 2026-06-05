//Eleição escolar

#include <bits/stdc++.h>
using namespace std;

long long catalaN(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    
    long long resto = 1e9 + 7;
    vector<long long> C;
    C.push_back(1);
    C.push_back(1);
    for(int i = 2 ; i <= n ; i++) {
        long long res = 0;
        for(int j = 0 ; j < C.size() ; j++) {
            res += (C[j] * C[i-j-1]) % resto;
        }
        C.push_back(res);
    }

    return C[n];
}

int main() {
    int n;
    cin >> n;
    cout << catalaN(n) << '\n';
    return 0;
}