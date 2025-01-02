#include <iostream>
#include <string>
#include "admin.h"
#include "menu.h"

using namespace std;

void adminView() {
    cout << "\nWelcome to the Admin View\n";
    int choice;

    while (true) {
        cout << "\nAdmin Menu:\n";
        cout << "1. Add Menu Item\n";
        cout << "2. Remove Menu Item\n";
        cout << "3. View All Menu Items\n";
        cout << "4. Exit to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addMenuItem();
            break;
            case 2:
                removeMenuItem();
            break;
            case 3:
                viewMenu();
            break;
            case 4:
                return;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
