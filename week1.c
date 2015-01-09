#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string DisplayApplicationInformation();
string DisplayDivider(string outputTitle);
string GetInput(); //
void TerminateApplication();
    
int main() {
    DisplayApplicationInformation();
    DisplayDivider("Start Program"); // start program
    DisplayDivider("Get Name"); // getName
    
    return 0;
} // end of main

string DisplayApplicationInformation() {
    
    cout << "Welcome to the Basic User Interface Program\nCIS247C, Week 1 Lab\nName: \nThis program accepts user input as a         string, then makes the appropriate data conversion."; 
    
} // end of DisplayApplicationInformation

string DisplayDivider(string outputTitle) {
    return outputTitle;
} // end of DisplayDivider

void TerminateApplication() {
} // end Terminate Application