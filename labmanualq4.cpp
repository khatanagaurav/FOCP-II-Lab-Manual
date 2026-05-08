/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase. 
Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.*/
#include <iostream>
using namespace std;

int main()
{
    int qty;
    float price;
    float totalAmt, discount, finalAmt;
    cout<<"Enter Quantity: ";
    cin >> qty;

    cout<<"Enter the Price: ";
    cin>>price;
    totalAmt = qty *price;

    discount = totalAmt *0.20;
    finalAmt = totalAmt - discount;

    cout << "Total Amount: " << totalAmt << endl;
    cout << "Discount applied: " << discount << endl;
    cout << "Amount payable now: " << finalAmt << endl;

    return 0;
}
