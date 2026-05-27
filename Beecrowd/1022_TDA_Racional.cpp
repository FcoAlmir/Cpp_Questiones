#include <iostream>
#include <numeric>

struct fraction {
    int n, d;
};

int main() {

    int trys;
    char barra, op;
    std::cin >> trys;
    fraction f1, f2, res;

    for(int i = 0 ; i < trys ; i++) {
        std::cin >> f1.n >> barra >> f1.d >> op >> f2.n >> barra >> f2.d;
        int mdc;

        switch(op) {
            default: std::cout << "Operação inválida";
                     break;
            //N1*D2 + N2*D1) / (D1*D2)
            case '+': res.n = f1.n * f2.d + f2.n * f1.d;
                      res.d = f1.d * f2.d;
                      mdc = std::gcd(res.n,res.d);
                      std::cout << res.n << '/' << res.d << " = " << res.n / mdc << '/' << res.d / mdc << std::endl;
                      break;
            //(N1*D2 - N2*D1) / (D1*D2)
            case '-': res.n = f1.n * f2.d - f2.n * f1.d;
                      res.d = f1.d * f2.d;
                      mdc = std::gcd(res.n,res.d);
                      std::cout << res.n << '/' << res.d << " = " << res.n / mdc << '/' << res.d / mdc << std::endl;
                      break;
            //(N1*N2) / (D1*D2)
            case '*': res.n = f1.n * f2.n;
                      res.d = f1.d * f2.d;
                      mdc = std::gcd(res.n,res.d);
                      std::cout << res.n << '/' << res.d << " = " << res.n / mdc << '/' << res.d / mdc << std::endl;
                      break;
            //(N1*D2)/(N2*D1)
            case '/': res.n = f1.n * f2.d;
                      res.d = f2.n * f1.d;
                      mdc = std::gcd(res.n,res.d);
                      std::cout << res.n << '/' << res.d << " = " << res.n / mdc << '/' << res.d / mdc << std::endl;
                      break;
        }
    }

    return 0;
}