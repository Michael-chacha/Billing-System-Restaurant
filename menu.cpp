#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include "menu.h"

using namespace std;

// Menu item structure
struct MenuItem {
    string name;
    double price;
};

vector<MenuItem> menuItems; // Global menu list

void addMenuItem() {
    string itemName;
    double itemPrice;

    cout << "\nEnter item name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
    getline(cin, itemName);
    cout << "Enter item price: ";
    cin >> itemPrice;

    menuItems.push_back({itemName, itemPrice});
    cout << "Item added successfully!\n";
}

void removeMenuItem() {
    string itemName;
    cout << "\nEnter the name of the item to remove: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
    getline(cin, itemName);

    for (auto it = menuItems.begin(); it != menuItems.end(); ++it) {
        if (it->name == itemName) {
            menuItems.erase(it);
            cout << "Item removed successfully!\n";
            return;
        }
    }
    cout << "Item not found!\n";
}

void viewMenu() {
    if (menuItems.empty()) {
        cout << "\nThe menu is currently empty.\n";
        return;
    }

    cout << "\nMenu Items:\n";
    for (const auto& item : menuItems) {
        cout << " - " << item.name << " : $" << item.price << "\n";
    }
}

void placeOrder() {
    if (menuItems.empty()) {
        cout << "\nThe menu is empty. Please try again later.\n";
        return;
    }

    string itemName;
    cout << "\nEnter the name of the item to order: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
    getline(cin, itemName);

    for (const auto& item : menuItems) {
        if (item.name == itemName) {
            cout << "You ordered " << itemName << " for $" << item.price << "\n";
            return;
        }
    }
    cout << "Item not found in the menu.\n";
}
