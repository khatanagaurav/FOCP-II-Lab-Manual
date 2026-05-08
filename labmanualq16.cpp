#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool prime = true;

    cin >> n;

    if (n <= 1) {
        prime = false;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime) {
        cout << "Prime Number";
    }
    else {
        cout << "Not a Prime Number";
    }

    return 0;
}
