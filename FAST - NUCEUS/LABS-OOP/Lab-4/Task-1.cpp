#include "iostream"
#include "string"
#include "cmath"
using namespace std;

class circle
{

private:
    int parameter, Area;
    float radius;

public:
    circle(int radius)
    {

        parameter = 2 * M_PI * radius;
        cout << "The parameter is:" << parameter << endl;
        Area = (radius * radius) * M_PI;
        cout << "The area is:" << Area << endl;
    }
    int getParameter() { return parameter; };
    int getArea() { return Area; };
};
int main()
{
    int radius;

    cout << "Enter the radius of the circle" << endl;
    cin >> radius;
    circle cirlce1(radius);
}