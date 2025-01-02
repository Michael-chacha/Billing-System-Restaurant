#include <iostream>
#include "user.h"
#include "admin.h"
#include <string>
#include <limits>

using namespace std;

// Function to clear the screen
void clearScreen() {
#ifdef _WIN32
    system("cls"); // Windows
#else
    system("clear"); // Linux/Mac
#endif
}

void entranceMenu() {
    cout << "Welcome to Restaurant Billing System\n";
    cout << "Now choose the Account To login \n";
    cout << "1. Admin\n2. User\nEnter your choice: ";
}

int main() {
    int choice; // Variable to hold the choice of account

    // Logic to handle user views
    while (true) {
        clearScreen();
        entranceMenu();
        cin >> choice;

        if (choice == 1) {
            adminView();
            break;
        } else if (choice == 2) {
            userView();
            break;
        } else {
            cout << "Invalid Choice. Please choose either Admin or Normal User\n";
        }

        // Clear invalid input in case of non-integer data
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        }
    }

    return 0;
}
