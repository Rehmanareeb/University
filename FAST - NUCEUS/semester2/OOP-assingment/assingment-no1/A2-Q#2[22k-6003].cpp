#include <iostream>
#include <string>
#include <vector>

using namespace std;

class DataScientist {
    private:
        string first_name;
        string last_name;
        string country;
        string highest_education;
        int age;
        int questions_asked;
        int answers_given;
        string unique_id;

    public:
        DataScientist(string fname, string lname, string cntry, int age, string edu, string id) {
            first_name = fname;
            last_name = lname;
            country = cntry;
            highest_education = edu;
            age = age;
            unique_id = id;
            questions_asked = 0;
            answers_given = 0;
        }

        void AskQuestion() {
            questions_asked++;
        }

        void AnswerProblem() {
            answers_given++;
        }

        // getters and setters
        string GetFirstName() const {
            return first_name;
        }

        void SetFirstName(string fname) {
            first_name = fname;
        }

        string GetLastName() const {
            return last_name;
        }

        void SetLastName(string lname) {
            last_name = lname;
        }

        string GetCountry() const {
            return country;
        }

        void SetCountry(string cntry) {
            country = cntry;
        }

        string GetHighestEducation() const {
            return highest_education;
        }

        int GetAge() const {
            return age;
        }

        string GetUniqueId() const {
            return unique_id;
        }

        int GetQuestionsAsked() const {
            return questions_asked;
        }

        int GetAnswersGiven() const {
            return answers_given;
        }
};

int main() {
    vector<DataScientist> scientists;
    int numScientists;

    // Ask the user for the number of scientists they want to create
    cout << "Enter the number of data scientists: ";
    cin >> numScientists;

    // Ask for information about each scientist and create an object for them
    for (int i = 0; i < numScientists; i++) {
        string first_name, last_name, country, highest_education, unique_id;
        int age;

        cout << "\nEnter the details for Data Scientist " << i + 1 << endl;

        cout << "First Name: ";
        cin >> first_name;

        cout << "Last Name: ";
        cin >> last_name;

        cout << "Country: ";
        cin >> country;

        cout << "Age: ";
        cin >> age;

        cout << "Highest Education: ";
        cin >> highest_education;

        cout << "Unique ID: ";
        cin >> unique_id;

        DataScientist scientist(first_name, last_name, country, age, highest_education, unique_id);

        scientists.push_back(scientist);
    }

    // Print the information for each scientist
    for (int i = 0; i < numScientists; i++) {
        DataScientist scientist = scientists[i];

        cout << "\nData Scientist " << i + 1 << ":\n";
        cout << "Name: " << scientist.GetFirstName() << " " << scientist.GetLastName() << endl;
        cout << "Country: " << scientist.GetCountry() << endl;
        cout << "Age: " << scientist.GetAge() << endl;
        cout << "Highest Education: " << scientist.GetHighestEducation() << endl;
        cout << "Unique ID: " << scientist.GetUniqueId() << endl;
    }

    return 0;
}
