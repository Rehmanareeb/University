#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

// function to extract last three digits of student ID
int extractLastThreeDigits(std::string id, int value) {
    value = std::stoi(id.substr(id.size() - 3));
    return value;
}

class radiator{
public:
    int radiator_id;
    bool radiator_status_is_on;
};

class Room 
{
    public:
    int seating_capacity, num_radiators;
    string room_name;

    Room() {
        seating_capacity = 12;
        num_radiators = 0;
        room_name = "";
    }

    int  setRoom() {
        cout << "Enter the room name: " << endl;
        cin >> room_name;
        cout << "Enter the seating capacity: " << endl;
        cin >> seating_capacity;
        return 0;
    }

    string isHeatedBy(radiator& radiator1, radiator& radiator2) {
        cout << "Enter the number of radiators: " << endl;
        cin >> num_radiators;

        //check if the radiators are not greater than 2
        if (num_radiators > 2) {
            cout << "The number of radiators cannot be greater than 2" << endl;
            cout << "Cannot add Radiator. Room has a maximum number of radiators." << endl;
            radiator1.radiator_status_is_on = true;
            radiator2.radiator_status_is_on = true;

            cout<< "Both the radiators are on. Enjoy the heat.";
        }
        //checking if the number of radiators are equal to 1.
        if (num_radiators == 1) {
            cout << "The radiator has been added" << endl;
            radiator1.radiator_status_is_on = true;
            radiator2.radiator_status_is_on = false;

            cout<< "The radiator 1 is on. Enjoy the heat.";
        }

        if (num_radiators == 2) {
            cout << "The radiator has been added" << endl;
            radiator1.radiator_status_is_on = true;
            radiator2.radiator_status_is_on = true;
            cout << "Both the radiators are on. Enjoy the heat" << endl;

            
        }
        return "No radiators are on.";
    }
};

int main() {
    string student_id, otpt;

    cout << "Enter your student ID: " << endl;
    cin >> student_id;

    int value = 0;

    radiator radiator1, radiator2;

    radiator1.radiator_id = extractLastThreeDigits(student_id, value);
    cout << "Radiator ID of radiator 1: " << radiator1.radiator_id << endl;

    //Adding the number 15 to the id of the second radiator as asked in the question.
    radiator2.radiator_id = extractLastThreeDigits(student_id, value) + 15;
    cout << "Radiator ID of radiator 2: " << radiator2.radiator_id << endl;

    Room room;
    room.setRoom();
    room.isHeatedBy( radiator1,  radiator2);

    return 0;
}
