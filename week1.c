#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string DisplayApplicationInformation();
string DisplayDivider(string outputTitle);
string GetInput(); //
string TerminateApplication();
    
int main() {
    string input;
    string name;
    int age;
    double mile;
    
    DisplayApplicationInformation();
    DisplayDivider("Start Program"); 
    
    DisplayDivider("Get Name");
    set name = GetInput("Your Name"); // calls GetInput to display Enter Your Name
    cout << "Your name is " + name + "\n";// displays "Your Name is...."
    
    DisplayDivider("Get Age");
    set age = GetInput("Your Age"); // calls GetInput to display Enter Your age
    cout << "Your age is: " + age + "\n"; // displays "Your age is..."
    
    DisplayDivider("Get Mileage");
    set input = GetInput("Gas Mileage"); // calls Get Input to display Enter Your Mileage
    //set mileage = convert input to double;
    cout << "Your car's MPG is: " + mileage + "\n"; //display mileage to two decimal places
    
    TerminateApplication();
    system("pause");// ************might not need this in XCode***************
    return 0;
} // end of main

string DisplayApplicationInformation() {
    cout << "Welcome to the Basic User Interface Program\nCIS247C, Week 1 Lab\nName: \nThis program accepts user input as a string, then makes the            appropriate data conversion.\n";
} // end of DisplayApplicationInformation

string DisplayDivider(string outputTitle) {
    cout << "**************** " + outputTitle + "****************\n";
} // end of DisplayDivider

string GetInput(string inputType) {
    string strInput;
    
    cout << "Enter the " + inputType + "\n"; //message that displays prompt to enter a name
    cin >> strInput; 
    /*****************Here is where I might need to add a statement that assigns strInput to inputType **************/
    return strInput; // 
} // end of GetInput

string TerminateApplication() {
    cout << "Thank you for using the Basic User Interface Program.";
} // end Terminate Application