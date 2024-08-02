#include <iostream>
using namespace std;

void invalidSelection(int profile) {
    cout << "The number you input, " << profile << " is outside the range of profiles. \n Please try again\n";
}

int showMenu(){
    cout << "Select a profile for the patient by inputting the corresponding number.\n";
    cout << "1: The patient has never had a COVID-19 vaccination.\n";
    cout << "2: The patient has had Vaccination D1 \n";
    cout << "3: The patient has had Vaccination D2 \n";
    cout << "4: The patient has had Vaccination D3 \n";
    cout << "Profile: ";
    int profile;
    cin >> profile;
    if (1 <= profile && 4 >= profile) {
        return profile;
    }
    else {
        invalidSelection(profile);
        return showMenu();
    }
}

void programEnd() {
    cout << "Thank you! Bye.\n";
}

int main(){
    string vaccination;
    int profile = showMenu();
    switch (profile) {
        case 1:
            vaccination = "D1";
            break;
        case 2:
            vaccination = "D2";
            break;
        case 3:
            vaccination = "D3";
            break;
        case 4:
            vaccination = "Covid Booster";
            break;
    }
    int doses;
    cout << "Input the number of doses: ";
    cin >> doses;
    cout << "Request: " << doses << " doses of " << vaccination << " \n";
    programEnd();
}