#include <iostream>
#include <string>
using namespace std;

int main() {
    int start, end;

    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (i <= 1) {
            continue;
        }

        bool prime = true;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << i << " ";
        }
    }

    cout << endl;

    string password;
    cin >> password;

    bool upper = false, lower = false, digit = false, special = false;

    for (char ch : password) {
        if (ch >= 'A' && ch <= 'Z')
            upper = true;
        else if (ch >= 'a' && ch <= 'z')
            lower = true;
        else if (ch >= '0' && ch <= '9')
            digit = true;
        else if (ch == '@' || ch == '#' || ch == '$' || ch == '%' ||
                 ch == '!' || ch == '&' || ch == '*')
            special = true;
    }

    if (upper && lower && digit && special)
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}
