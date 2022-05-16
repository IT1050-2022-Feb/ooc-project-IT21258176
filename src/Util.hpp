#ifndef UTIL_HPP
#define UTIL_HPP

#include <iostream>

using namespace std;

class Util {
public:
    char getRandomChar();
    string generateRandomId();
    long hash(char*);
};

#endif