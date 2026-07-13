#include <bits/stdc++.h>

using namespace std;


stack<int> criarPilha(int n) {
    stack<int> pilha;
    for(int i = n ; i > 0 ; i--) {
        pilha.push(i);
    }

    return pilha;
}


void firstBase(stack<int> &p1) {

    stack<int> ptroca = criarPilha(0);
    stack<int> paux = criarPilha(0);

    paux.push(p1.top());
    p1.pop();

    while(!p1.empty()) {
        ptroca.push(p1.top());
        p1.pop();
    }

    p1.push(paux.top());
    paux.pop();

    while(!ptroca.empty()) {
        p1.push(ptroca.top());
        ptroca.pop();
    }
}


int main() {
    int n;
    do {
        cin >> n;
        if(n == 0) break;
        stack<int> p = criarPilha(n);
        cout << "Discarded cards: ";
        while(p.size() > 1) {
            if(p.size() == 2) {
                //beleza estética do cout
                cout << p.top();
                p.pop();
                firstBase(p);
                break;
            }

            cout << p.top() << ", ";
            p.pop();
            firstBase(p);
        }
        cout << '\n' << "Remaining card: " << p.top() << '\n';
        p.pop();
    } while(n != 0);
}