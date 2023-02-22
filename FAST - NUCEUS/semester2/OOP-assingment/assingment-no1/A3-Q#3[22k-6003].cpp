#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

//fu`nction to extract the third last digit of the id
int extractLastThreeDigits(std::string id, int value) {
    value = std::stoi(id.substr(id.size() - 3));
    return value;
}

class Person {
    string name;
    int id;
    int date_of_birth_day, date_of_birth_month, date_of_birth_year;

public:
    void setid(int unique_id) {
        int value = 0;
        id = extractLastThreeDigits("22k-6003", value);
    }

    int getid() {
        cout << "The id of the person is: " << id << endl;
        return 0;
    }

    void getinfo() {
        cout << "Enter the name of the person: " << endl;
        getline(cin,name);
        cout << "Enter the date of birth of the person: " << endl;
        cout << "Enter the day: " << endl;
        cin >> date_of_birth_day;
        cout << "Enter the month: " << endl;
        cin >> date_of_birth_month;
        cout << "Enter the year: " << endl;
        cin >> date_of_birth_year;
    }

    int getage() {
        int age = 2023 - date_of_birth_year;
        return age;
    }

    int maximum_heart_rate() {
        int max_heart_rate = 220 - getage();
        cout << "The maximum heart rate is: " << max_heart_rate << endl;
        return max_heart_rate;
    }

    void target_heart_rate() {
        int max_heart_rate = maximum_heart_rate();
        int target_heart_rate_50 = max_heart_rate * 0.5;
        int target_heart_rate_85 = max_heart_rate * 0.85;   
        cout << "The target heart rate should be between " << target_heart_rate_50 << " and " << target_heart_rate_85 << endl;
    }
};

int main()
{
    int value=0;
    Person fitness_guy;
    fitness_guy.getinfo();
    fitness_guy.setid(extractLastThreeDigits("22k-6003", value));
    fitness_guy.getid();
    cout << "The age of the person is: " << fitness_guy.getage() << endl;
    fitness_guy.target_heart_rate();
}
