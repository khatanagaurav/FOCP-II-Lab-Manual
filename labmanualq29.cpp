#include <iostream>
using namespace std;

int main() {
    int temp[30];

    for (int i = 0; i < 30; i++) {
        cin >> temp[i];
    }

    int min = temp[0];

    for (int i = 1; i < 30; i++) {
        if (temp[i] < min) {
            min = temp[i];
        }
    }

    cout << "Minimum Temperature = " << min;

    return 0;
}
