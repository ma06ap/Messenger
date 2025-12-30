//
// Created by matin on 12/30/25.
//

#ifndef MESSENGER_EXCEPTION_H
#define MESSENGER_EXCEPTION_H
#include <stdexcept>

using namespace std;

class MenuException : public runtime_error {
public:
    explicit MenuException(const string& msg) : runtime_error(msg) {}
};


#endif //MESSENGER_EXCEPTION_H