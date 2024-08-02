// IMPORTANT. READ COMMENT ON LINE 48-49. THE PROGRAM WILL NOT FUNCTION WITHOUT IT.

//Lars-Martin Brubæk Gihle

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int numberOfApprovedPinCodes = 300;
const string fileName = "approvedPinCodes.txt";

void myWelcome(string name) {
    cout << "Welcome, " << name << "\n";
}

void databaseWelcome() {
    cout << "You have correctly accessed the database\n";
}

void myPinCodeWarningMessage() {
    cout << "The pincode entered is wrong\n";
}

bool yourLastNameSearch(string approvedCodes[], int arrayLength, string userInput){
    for (int i=0;i<arrayLength; ++i){
        if (approvedCodes[i] == userInput){
            return(true);
        }
        }
    return(false);
    }



int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    myWelcome(name);
    string userInput;
    cout << "Enter your 4-digit pin code: ";
    cin >> userInput;
    string validPinCodes[numberOfApprovedPinCodes];
    ifstream file;
    file.open(fileName);
    int lines = 0;
    // NOTE: for some reason I could not get the first line in the txt document to work properly. It evaluated
    // to wrong even when I entered 1450. I therefore made a buffer line in the txt document and ignored the first line. I don't know how
    // to contact the professor and can't find any solutions online.
    // to use my solution: just create a line at the top of the input file with some text, and add this line here: file.ignore(1000, '\n');
    while(file >> validPinCodes[lines]){
        lines++;
    }
    if(!yourLastNameSearch(validPinCodes, numberOfApprovedPinCodes, userInput)){
        myPinCodeWarningMessage();
    }
    else{
        databaseWelcome();
    }
}