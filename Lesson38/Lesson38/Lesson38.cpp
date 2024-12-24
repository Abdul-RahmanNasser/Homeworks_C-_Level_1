#include <iostream>
#include<string>
using namespace std;
struct personalinfo {
    string name, city, country;
    int age, monthly_salary, yearly_salary;
    char gender;
    bool married;
};
void readinfo(personalinfo &personal1) {
    cout << "Please, enter your name: ";
    getline(cin,personal1.name);
    cout << "Please, enter your age: ";
    cin >> personal1.age;
    cout << "Please, enter your city: ";
    cin.ignore(1, '\n');
    getline(cin,personal1.city);
    cout << "Please, enter your country: ";
    getline(cin,personal1.country);
    cout << "Please, enter your monthly salary: ";
    cin >> personal1.monthly_salary;
    personal1.yearly_salary = personal1.monthly_salary * 12;
    cout << "Please, enter your gender(M/F): ";
    cin >> personal1.gender;
    cout << "Please, are you married(0/1)?\n";
    cin >> personal1.married;
}
void printinfo(personalinfo &personal1) {
    cout << "*****************************************************" << endl;
    cout << "Name: " << personal1.name << ".\n";
    cout << "Age: " << personal1.age << " years old.\n";
    cout << "City: " << personal1.city << ".\n";
    cout << "Country: " << personal1.country << ".\n";
    cout << "Monthly Salary: " << personal1.monthly_salary << " dollars.\n";
    cout << "Yearly Salary: " << personal1.yearly_salary << " dollars.\n";
    cout << "Gender: " << personal1.gender << ".\n";
    cout << "Married: " << personal1.married << ".\n";
    cout << "*****************************************************" << endl;
}
int main()
{
    personalinfo Personal_1;
    readinfo(Personal_1);
    printinfo(Personal_1);
    return 0;
}