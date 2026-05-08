/*A teacher wants to calculate the average marks of three students to determine the class performance. 
Implement a solution to accept three numbers and compute their average.*/
#include <iostream>
using namespace std;
int main()
{
    float marks1, marks2, marks3;
    cout<<"Enter the marks of first student: "<<endl;
    cin>> marks1;
    cout<<"Enter the marks of second student: "<<endl;
    cin>> marks2;
    cout<<"Enter the marks of third student: "<<endl;
    cin>> marks3;

    cout<<"The average marks is: "<< (marks1+marks2+marks3)/3;
    return 0;
}
