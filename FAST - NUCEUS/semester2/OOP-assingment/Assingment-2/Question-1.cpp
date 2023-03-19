#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

class person {

  int age;

protected:
  string name;

public:
  person(string naam = " ", int umer = 0) : name(naam), age(umer){};
  string getdata(int max_name_length) {
    cout << "[+]Enter your name: " << endl;
    getline(cin, name);
    if (name.length() > max_name_length) {
      name = name.substr(0, max_name_length);
    }

    cout << "[-]Enter your age: " << endl;
    cin >> age;
    return name;
  }
  void putdata() {
    cout << "[+]Name: " << name << endl;
    cout << "[+]Age: " << age << endl;
  }
};

class Employee {
  int empid;

protected:
  int salary;

public:
  Employee(int id = 0, int sal = 0) : empid(id), salary(sal){};
  void getdata() {

    cout << "[-]Enter your employee id: " << endl;
    cin >> empid;
    cout << "[-]Enter your monthly salary: " << endl;
    cin >> salary;
  }
  void putdata() {

    cout << "[+]Employee id: " << empid << endl;
    cout << "[+]Monthly salary: " << salary << endl;
  }
};

class Manager : public person, public Employee {
  string type_of_manager;
};

class IT_Manager : public Manager {
  int No_of_persons_managed;

public:
  IT_Manager(int num = 0) : No_of_persons_managed(num){};
  void get_data() {
    cout << "[-]Enter the number of persons managed by you: " << endl;
    cin >> No_of_persons_managed;
  }
  void put_data() {
    cout << "[+]Number of persons managed by " << name
         << " are:" << No_of_persons_managed << endl;
  }
  void print_all_the_related_data() {

    person::getdata(35);
    Employee::getdata();
    get_data();

    cout << "-->Please wait while we are processing your data..." << endl;
    sleep(2);
    person::putdata();
    Employee::putdata();
    put_data();
  }
};
int main() {
  IT_Manager Manager_1;
  Manager_1.print_all_the_related_data();
  return 0;
}