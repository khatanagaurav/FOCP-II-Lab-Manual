#include <iostream>
using namespace std;

class MovieTicket
{
private:
    string movieName;
    int seatNumber;
    float ticketPrice;
    bool isBooked;

public:
    MovieTicket()
    {
        movieName = "Unknown";
        seatNumber = 0;
        ticketPrice = 200;
        isBooked = false;
    }

    MovieTicket(string name, int seat, float price)
    {
        movieName = name;
        seatNumber = seat;
        ticketPrice = price;
        isBooked = false;
    }

    void bookTicket()
    {
        if (!isBooked)
        {
            isBooked = true;
            cout << "\nTicket booked successfully for seat " << seatNumber;
        }
        else
        {
            cout << "\nSeat already booked!";
        }
    }

    void cancelTicket()
    {
        if (isBooked)
        {
            isBooked = false;
            cout << "\nTicket cancelled for seat " << seatNumber;
        }
        else
        {
            cout << "\nTicket is not booked yet!";
        }
    }

    void displayTicketDetails()
    {
        cout << "\nMovie Name: " << movieName;
        cout << "\nSeat Number: " << seatNumber;
        cout << "\nTicket Price: " << ticketPrice;
        cout << "\nStatus: " << (isBooked ? "Booked" : "Not Booked") << endl;
    }

    float calculateTotalCost(int numberOfTickets)
    {
        return ticketPrice * numberOfTickets;
    }
};

int main()
{
    MovieTicket t1;
    MovieTicket t2("Avengers", 12, 250);

    cout << "\n--- Ticket 1 ---";
    t1.displayTicketDetails();
    t1.bookTicket();
    t1.displayTicketDetails();

    cout << "\nTotal cost for 3 tickets = "
         << t1.calculateTotalCost(3) << endl;

    cout << "\n\n--- Ticket 2 ---";
    t2.displayTicketDetails();
    t2.bookTicket();
    t2.cancelTicket();
    t2.displayTicketDetails();

    return 0;
}
