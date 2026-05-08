#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, r1, r2;
    
    cin >> a >> b >> c;

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different\n";
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }
    else if (d == 0) {
        r1 = -b / (2 * a);
        cout << "Roots are real and equal\n";
        cout << "Root = " << r1 << endl;
    }
    else {
        double real = -b / (2 * a);
        double imag = sqrt(-d) / (2 * a);

        cout << "Roots are imaginary\n";
        cout << "Root 1 = " << real << " + " << imag << "i" << endl;
        cout << "Root 2 = " << real << " - " << imag << "i" << endl;
    }

    return 0;
}
