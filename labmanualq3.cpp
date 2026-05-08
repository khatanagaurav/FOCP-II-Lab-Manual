/* A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to 
convert Fahrenheit temperature into Centigrade or vice versa. */
#include <iostream>
using namespace std;

int main()
{
    float temp;
    int option;
    cout<<"1. Convert Celsius to Fahrenheit" << endl;
    cout<<"2. Convert Fahrenheit to Celsius" << endl;
    cout<<"Choose an option (1 or 2): ";
    cin>>option;

    if(option == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;

        float result = (temp * 9 / 5) + 32;
        cout <<"Temperature in Fahrenheit is: " << result << endl;
    }
    else if(option == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;

        float result = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius is: " << result << endl;
    }
    else
    {
        cout << "Sorry, wrong choice" << endl;
    }

    return 0;
}
