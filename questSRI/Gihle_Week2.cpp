//Research Topic: covid data analysis
//Developed by: Lars-Martin Brubæk Gihle
#include <iostream>

using namespace std;

void myWelcomeMessage() {
    cout << "Welcome to the data analysis program." << endl;
}

void inputDataTransferMessage() {
    cout << "The input data has succesfully been transferred to an array" << endl;
}

void outputDataTransferMessage() {
    cout << "The data has succesfully been saved in an output data file" << endl;
}

void myClosingMessage() {
    cout << "Program execution completed. Findings saved to an output file" << endl;
}

int main() {
    myWelcomeMessage();
    inputDataTransferMessage();
    outputDataTransferMessage();
    myClosingMessage();
}