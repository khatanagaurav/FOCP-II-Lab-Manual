#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    int total = m1 + m2 + m3 + m4 + m5;
    float percentage = total / 5.0;

    cout << "Total = " << total << endl;
    cout << "Percentage = " << percentage;

    return 0;
}
