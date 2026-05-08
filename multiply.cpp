#include<iostream>
using namespace std;
int multiply(int a, int b)
{
    return (a*b);
}
int multiply(int a, int b, int c) 
{
    return(a*b*c);
}
double multiply(double a, double b)
{
    return (a*b);
}
int main()
{
    int result= multiply(10,25);
    cout<<"\n 2 no multiplication = "<<result;
    cout<<"\n 3 no multiplication = "<<multiply(10,20,30);
    cout<<"\n double 2 nos multiplication = "<<multiply(10.6,3.8);
    return 0;
}
