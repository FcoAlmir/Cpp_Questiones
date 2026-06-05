//Bolacha
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    if(N % K == 0) cout << '1' << '\n';
    else {
        cout << lcm(N,K)/N << '\n';
    }
    return 0;
}

