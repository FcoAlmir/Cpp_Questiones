#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0 ; i < N ; i++) {
        string code;
        int cifra;

        cin >> code;
        cin >> cifra;

        for(char c : code) {
            c -= cifra;
            if(c < 65) c += 26;

            cout << c;
        }

        cout << '\n';
    }

    return 0;
}