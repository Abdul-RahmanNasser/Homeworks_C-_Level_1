#include <iostream>
#include<string>
using namespace std;
void Print(string name) {
    cout << "Please, enter your whole name: ";
    getline(cin, name);
    cout << "Your name is " << name << ".\n";
}
int main()
{
    // Problem #2: Write a program to ask the user to enter his/her name and print it on the screen.
    string name;
    Print(name);
    return 0;
}