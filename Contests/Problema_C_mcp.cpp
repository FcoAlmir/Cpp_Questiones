//Comentários do Coxinha
#include <bits/stdc++.h>
using namespace std;

long long findW(string fr, string subfr, long long pos = 0) {
    size_t truePos = fr.find(subfr, pos);
    
    if(truePos == string::npos) return 0;
    else {
        return 1 + findW(fr, subfr, truePos + subfr.length());
    }
}

int main() {
    long long e, o, count = 0;

    cout << "Digite a quantidade de elogios e ofensas: ";
    cin >> e >> o;
    string El[e], Of[o], fr;

    for(int i = 0 ; i < e ; i++) {
        cin >> El[i];
    }

    for(int i = 0 ; i < o ; i++) {
        cin >> Of[i];
    }

    cout << "Digite a frase: ";
    cin.ignore();
    getline(cin, fr);

    for(int i = 0 ; i < e ; i++) {
        count += findW(fr, El[i]);
    }

    for(int i = 0 ; i < o ; i++) {
        count -= findW(fr, Of[i]);
    }

    if(count > 0) cout << "perto" << endl;
    else if(count < 0) cout << "longe" << endl;
    else {
        cout << "indeterminado" << endl;
    }

    return 0;
}