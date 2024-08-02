#include <iostream>
#include <string>
using namespace std;
int number_Of_Grades = 10;

int main(){
    cout << "Welcome to the Bule Hills College grade reporting program.\n";
    string class_Name;
    cout << "Enter the name of the class: ";
    cin >> class_Name;
    cout << "Enter the grade of each respective student (from 1 to 10, where 10 is the best): \n";
    int grades[number_Of_Grades];
    double sum_Of_Grades;
    for(int i = 0; i<number_Of_Grades; i++){
        cout << "Student " << i+1 << ": ";
        cin >> grades[i];
        sum_Of_Grades += grades[i];
    }
    cout << "All grades were loaded into one one-dimensional array for class " << class_Name << "\n";
    cout << "Here are the numbers (grades) you have entered:\n";
    for(int i=0;i<number_Of_Grades;i++){
        cout << "The grade you entered for student " << i+1 << " was: " << grades[i] << "\n";
    }
    double class_Average = sum_Of_Grades/number_Of_Grades;
    if (class_Average <= 6){
        cout << "The class, " << class_Name << " is low performing. You should inform the Dean's office.\n";
    }
    if (class_Average > 6 && class_Average < 8.9){
        cout << "The class, " << class_Name << " is performing normally. You should not inform the Dean's office.\n";
    }
    if (class_Average > 8.9){
        cout << "The class, " << class_Name << " is performing unexpectedly well. You shuold inform the Dean's office.\n";
    }
    cout << "Thank you for using the Blue Hills College class average program for the class, " << class_Name;
}