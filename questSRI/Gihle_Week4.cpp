#include <iostream>
using namespace std;

void myWelcome() {
    cout << "Greetings. This program converts different measurements to each other\n";
}

void myUserMenu() {
    cout << "Option 1 Mile to Kilometer\n";
    cout << "Option 2 Kilometer to Mile\n";
    cout << "Option 3 Exit from the Program\n";
    cout << "Input: 1, 2, or 3\n";
    cout << "Input: ";
}

void myWarningMessage(int value) {
    cout << "Warning, " << value << "is not a valid input. Try again.\n";
}

int main(){
    myWelcome();
    int option;
    double miles;
    double km;
    while (true) {
        while (true) {
            myUserMenu();
            cin >> option;
            if (0 < option && option < 4) {
            break;
            }
            else{
                myWarningMessage(option);
        }
        }
        if (option == 1) {
            cout << "This is a mile to kilometer converter\n";
            cout << "Input the amount of miles: ";
            cin >> miles;
            km = miles * 1.609344;
            cout << "That is the same as " << km << " kilometers\n\n";
        }
        if (option == 2) {
            cout << "This is a kilometer to mile converter\n";
            cout << "Input the amount of kilometers: ";
            cin >> km;
            miles = km * 0.621371;
            cout << "That is the same as " << miles << " miles\n\n";
        }
        if (option == 3) {
            cout << "Program exiting.\n";
            break;
        }
    }   
}