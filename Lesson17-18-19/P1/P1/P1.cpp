#include <iostream>
using namespace std;
int main()
{
    string name, city, country;
    char gender;
    short int age;
    float monthlysalary;
    bool ismarried;
    cout << "Please, enter your name: ";
    cin >> name;
    cout << "Please, enter your city: ";
    cin >> city;
    cout << "Please, enter your country: ";
    cin >> country;
    cout << "Please, enter your gender(M/F): ";
    cin >> gender;
    cout << "Please, enter your age: ";
    cin >> age;
    cout << "Please, enter your monthly salary: ";
    cin >> monthlysalary;
    float yearlysalary = monthlysalary * 12;
    cout << "Please, are you married(1/0)? ";
    cin >> ismarried;
    cout << "\n******************************************************" << endl;
    cout << "Name: " << name << "." << endl;
    cout << "Age: " << age << " Years Old." << endl;
    cout << "City: " << city << "." << endl;
    cout << "Country: " << country << "." << endl;
    cout << "Monthly Salary: " << monthlysalary << "." << endl;
    cout << "Yearly Salary: " << yearlysalary << "." << endl;
    cout << "Gender: " << gender << "." << endl;
    cout << "Married: " << ismarried << "." << endl;
    cout << "******************************************************" << endl;
    return 0;
}