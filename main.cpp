#include "main.h"



int main() {
    // cout << BG_CYAN_B  << endl;
    LocalUser* loc = new LocalUser;
    while (1) {
        try {
            if (loc == nullptr) {
                authMenu();
            }
            else {
                dashboardMenu(loc);
            }
        }
        catch (...) {
            cout << RED << "Fatal error\n" << RESET;
        }
    }
    return 0;
}
