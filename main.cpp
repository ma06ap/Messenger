#include "main.h"



int main() {
    LocalUser* loc = nullptr;
    while (1) {
        try {
            if (loc == nullptr) {
                authMenu();
            }
            else {
                dashboardMenu();
            }
        }
        catch (...) {
            cout << RED << "Fatal error\n" << RESET;
        }
    }
    return 0;
}
