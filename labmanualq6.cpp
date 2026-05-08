/* An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
display results. */
#include <iostream>
using namespace std;

int main() 
{
    int numEmployees;
    float basicSal,bonus,netSalary;

    cout<<"Enter number of employes:";
    cin>>numEmployees;

    for(int i=1;i<=numEmployees;i++)
    {
        cout<<"\nEnter basic salary of employee "<<i<<":";
        cin>>basicSal;

        bonus = basicSal*0.12;   // 12% bonus
        netSalary = basicSal + bonus;

        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Net Salary:"<<netSalary<<endl;
    }
    return 0;

}    
