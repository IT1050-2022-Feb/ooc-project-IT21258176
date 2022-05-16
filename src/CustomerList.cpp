#include "CustomerList.hpp"
#include <string.h>
#include <iostream>
#include "Customer.hpp"

using namespace std;

CustomerList* CustomerList::push(Customer* cus) {
  elements.push_back(cus);
  return this;
}

Customer* CustomerList::login(string username, string password) {
  for (Customer* cus : elements) {
    if (!cus->isUsernameEqual(username))
      continue;
    if (cus->isPasswordEqual(password))
      return cus;
    cout << "Incorrect password" << endl;
    exit(EXIT_FAILURE);
  }
  cout << "User not found!" << endl;
  exit(EXIT_FAILURE);
}