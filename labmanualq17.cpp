#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, choice;
    
    cin >> n;
    cin >> choice;

    if (choice == 1) {
        int sum = 0;

        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == n) {
            cout << "Perfect Number";
        }
        else {
            cout << "Not a Perfect Number";
        }
    }
    else if (choice == 2) {
        int temp = n, digits = 0;
        int sum = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = n;

        while (temp > 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == n) {
            cout << "Armstrong Number";
        }
        else {
            cout << "Not an Armstrong Number";
        }
    }

    return 0;
}
