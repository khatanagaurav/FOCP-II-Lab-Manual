#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swapping:"<<a<<" "<<b;
}
void swap(float &a,float &b)
{
    float temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swap: "<<a<<" "<<b;
}
int main()
{
    int i1,i2;
    float f1, f2;

    cout << "enter two integer no: ";
    cin >> i1 >> i2;
    swap(i1, i2);

    cout << "\nEnter two float no: ";
    cin >>f1>>f2;
    swap(f1,f2);
    return 0;
}
