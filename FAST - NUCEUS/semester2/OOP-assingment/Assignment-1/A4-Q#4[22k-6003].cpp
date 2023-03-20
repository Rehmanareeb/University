#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
    string name;
    string showtime;
public:
    Movie(string n, string st) {
        name = n;
        showtime = st;
    }
    void display() {
        cout << "Movie Name: " << name << endl;
        cout << "Show Time: " << showtime << endl;
    }
};

class Ticket {
private:
    int row;
    int seat;
    int ticketID;
    bool sold;
public:
    Ticket(int r, int s, int id) {
        row = r;
        seat = s;
        ticketID = id;
        sold = false;
    }
    bool isSold() {
        return sold;
    }
    void sellTicket() {
        sold = true;
    }
    void display() {
        cout << "Ticket ID: " << ticketID << endl;
        cout << "Row Number: " << row << endl;
        cout << "Seat Number: " << seat << endl;
        if (sold) {
            cout << "Status: Sold" << endl;
        } else {
            cout << "Status: Available" << endl;
        }
    }
};

int main() {
    string idString, idPrefix;
    int row, seat, ticketID;

    // Create a movie object
    Movie movie1("Puss in the boots:The last wish", "10:00 PM");
    // Display movie information
    movie1.display();

    // Get the student ID from the user and extract the prefix for the ticket ID
    cout << "Enter your student ID: ";
    cin >> idString;
    idPrefix = idString.substr(0, 2);
    ticketID = stoi(idPrefix);

    // Get the row number and seat number from the user
    cout << "Enter the row number: "<<endl;
    cin >> row;
    cout << "Enter the seat number: "<<endl;
    cin >> seat;

    // Create a ticket object with the user input values
    Ticket ticket1(row, seat, ticketID);
    // Display ticket information
    ticket1.display();
    // Check if ticket is sold
    if (ticket1.isSold()) {
        cout << "This ticket is already sold." << endl;
    } else {
        // Sell the ticket
        ticket1.sellTicket();
        cout << "Ticket sold!" << endl;
    }
    // Display updated ticket information
    ticket1.display();

    return 0;
}
