/*Develop a menu-driven calculator program in C++ to perform basic arithmetic operations. 
The program should continue executing based on the user's choice and display the result of each operation.*/
#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    float num1, num2;

    while (choice != 5) {
        cout<<"\n=====Calculator Menu ====="<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"Enter two numbers: ";
                cin>>num1>>num2;
                cout<<"Result = "<<num1+num2<<endl;
                break;
            case 2:
                cout<<"Enter two numbers: ";
                cin>>num1 >>num2;
                cout<<"Result = "<<num1 - num2<<endl;
                break;
            case 3:
                cout<<"Enter two numbers: ";
                cin>>num1 >>num2;
                cout<<"Result= " <<num1 *num2 <<endl;
                break;
            case 4:
                cout<<"Enter two numbers: ";
                cin>>num1 >>num2;
                if(num2!=0)
                    cout<<"Result= "<<num1/num2<<endl;
                else
                    cout<<"Error--------------Division by zero"<<endl;
                break;
            case 5:
                cout<<"//////Exiting program/////"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
