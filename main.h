//
// Created by matin on 12/30/25.
//

#ifndef MESSENGER_MAIN_H
#define MESSENGER_MAIN_H

#include <iostream>

#include "ConsoleStyle.h"
#include "Exception.h"
#include "LocalUser.h"


using namespace std;


inline int readChoice() {
    int choice;
    if (!(cin >> choice)) {
        cin.clear();
        cin.ignore(10000, '\n');
        throw MenuException("Invalid input (not a number)");
    }
    return choice;
}

inline void login() {
    clearTerminal();
    cout << GREEN << "Login page\n" << RESET;
    cout << "Login successful (mock)\n";
    int n = 0;
    cin >> n; // mock to pause
}

inline void signup() {
    clearTerminal();
    cout << GREEN << "Signup page\n" << RESET;
    cout << "Signup successful (mock)\n";
    int n = 0;
    cin >> n; // mock to pause
}

inline void authMenu() {
    while (true) {
        try {
            clearTerminal();
            cout << BOLD << CYAN << "=== Welcome ===\n" << RESET;
            cout << "1. Login\n";
            cout << "2. Sign up\n";
            cout << "Choice: ";

            int c = readChoice();

            if (c == 1) login();
            else if (c == 2) signup();
            else throw MenuException("Invalid choice");

            int n = 0;
            cin >> n; // mock to pause

            break; // go to dashboard
        }
        catch (exception& e) {
            cout << RED << e.what() << RESET << endl;
            // cin.get(); cin.get();
        }
    }
}


inline void usersMenu() {
    while (true) {
        try {
            clearTerminal();
            cout << BOLD << BLUE << "=== Users ===\n" << RESET;
            cout << "1. Show all\n";
            cout << "2. Search\n";
            cout << "3. Sort\n";
            cout << "0. Back\n";
            cout << "Choice: ";

            int c = readChoice();

            if (c == 0) return;
            else if (c == 1) cout << "Showing users...\n";
            else if (c == 2) cout << "Searching users...\n";
            else if (c == 3) cout << "Sorting users...\n";
            else throw MenuException("Invalid user menu option");

            int n = 0;
            cin >> n; // mock to pause

            // cin.get(); cin.get();
        }
        catch (exception& e) {
            cout << RED << e.what() << RESET << endl;
            // cin.get(); cin.get();
        }
    }
}


inline void chatsMenu() {
    while (true) {
        try {
            clearTerminal();
            cout << BOLD << YELLOW << "=== Chats ===\n" << RESET;
            cout << "1. Show chats\n";
            cout << "2. Sort by name\n";
            cout << "3. Search\n";
            cout << "0. Back\n";
            cout << "Choice: ";

            int c = readChoice();

            if (c == 0) return;
            else if (c == 1) cout << "Chats list...\n";
            else if (c == 2) cout << "Sorting chats...\n";
            else if (c == 3) cout << "Searching chats...\n";
            else throw MenuException("Invalid chats menu option");


            int n = 0;
            cin >> n; // mock to pause

            // cin.get(); cin.get();
        }
        catch (exception& e) {
            cout << RED << e.what() << RESET << endl;
            // cin.get(); cin.get();
        }
    }
}


inline void dashboardMenu(LocalUser*& user) {
    while (true) {
        try {
            clearTerminal();
            cout << BOLD << GREEN << "=== Dashboard ===\n" << RESET;
            cout << "1. All users\n";
            cout << "2. Chats\n";
            cout << "3. New chat\n";
            cout << "4. Logout\n";
            cout << "Choice: ";

            int c = readChoice();

            if (c == 1) usersMenu();
            else if (c == 2) chatsMenu();
            else if (c == 3) cout << "New chat created...\n";
            else if (c == 4) {
                user = nullptr;
                return;
            }
            else throw MenuException("Invalid dashboard option");

            int n = 0;
            cin >> n; // mock to pause

            // cin.get(); cin.get();
        }
        catch (exception& e) {
            cout << endl << RED << e.what() << RESET << endl;
            // cin.get(); cin.get();
        }
    }
}









int main();

#endif //MESSENGER_MAIN_H