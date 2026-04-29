// Main menu
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int select {};
    const char *MenuText1 = "Welcome to ExtractionZ";
    const char *MenuText2 = "Select Option:";
    const char *MenuText3 = "1. Start New Game";
    const char *MenuText4 = "2. Continue Game";
    cout << MenuText1 << endl;
    cout << MenuText2 << endl;
    cout << MenuText3 << endl;
    cout << MenuText4 << endl;
    cin >> select;
    switch (select) {
    case 1:
        // code to execute if expression == constant1
        break;
    case 2:
        // code to execute if expression == constant2
        break;
    default:
        // code to execute if no cases match
        cout << "Error: Please type either 1 or 2";
    };
    return 0;
}


