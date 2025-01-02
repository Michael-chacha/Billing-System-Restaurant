#include <iostream>
#include "user.h"
#include "menu.h"

using namespace std;

void userView() {
    cout << "\nWelcome to the User View\n";
    int choice;

    while (true) {
        cout << "\nUser Menu:\n";
        cout << "1. View Menu Items\n";
        cout << "2. Place an Order\n";
        cout << "3. Exit to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                viewMenu();
            break;
            case 2:
                placeOrder();
            break;
            case 3:
                return;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
