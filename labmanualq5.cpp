/*A student wants to swap the values of two variables for practising coding basics. 
Implement a solution to swap two numbers using different techniques. */
#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping:" <<endl;
    cout<<"First number: " <<a<<endl;
    cout<<"Second number: " <<b<<endl;

    return 0;
}
