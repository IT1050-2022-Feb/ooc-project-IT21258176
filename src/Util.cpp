#include "Util.hpp"
#include <algorithm>
#include <climits>
#include <functional>
#include <iostream>
#include <random>
#include <sstream>
#include <vector>

using namespace std;

char Util::getRandomChar() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(0, 255);
  return static_cast<char>(dis(gen));
}

string Util::generateRandomId() {
  const int LENGTH = 10;
  stringstream ss;

  for (auto i = 0; i < LENGTH; i++) {
    char rc = getRandomChar();
    stringstream hexstream;
    hexstream << hex << int(rc);
    string hex = hexstream.str();
    ss << (hex.length() < 2 ? '0' + hex : hex);
  }

  return ss.str();
}