#include "Customer.hpp"
#include <string.h>
#include <iostream>
#include "Util.hpp"

using std::cout;
using std::endl;
using std::string;

Customer::Customer(string _username, string _password) {
  Util u;
  id = u.generateRandomId();
  username = _username;
  password = _password;
}

string Customer::getId() {
  return id;
}

bool Customer::isUsernameEqual(string _username) {
  return strcmp(username.c_str(), _username.c_str()) == 0;
}

Customer* Customer::changeUsername(string _username) {
  username = _username;
  return this;
}

Customer* Customer::changePassword(string oldPassword, string newPassword) {
  if (password != oldPassword) {
    cout << "Incorrect password";
    exit(EXIT_FAILURE);
  }
  password = newPassword;
  return this;
}

bool Customer::isPasswordEqual(string _password) {
  bool match = password == _password;
  return match;
}

Customer* Customer::addEmail(string email) {
  emails.push_back(email);
  return this;
}

Customer* Customer::removeEmail(string _email) {
  for (int i = 0; i < emails.size(); i++) {
    if (strcmp(emails[i].c_str(), _email.c_str()))
      continue;
    emails.erase(emails.begin() + i);
    return this;
  }
  return this;
}

Customer* Customer::addContactNo(string contactNo) {
  contactNos.push_back(contactNo);
  return this;
}

Customer* Customer::removeContactNo(string no) {
  for (int i = 0; i < contactNos.size(); i++) {
    if (strcmp(contactNos[i].c_str(), no.c_str()))
      continue;
    contactNos.erase(contactNos.begin() + i);
    return this;
  }
  return this;
}

Customer* Customer::addLocation(string location) {
  locations.push_back(location);
  return this;
}

Customer* Customer::removeLocation(string location) {
  for (int i = 0; i < locations.size(); i++) {
    if (strcmp(locations[i].c_str(), location.c_str()))
      continue;
    locations.erase(locations.begin() + i);
    return this;
  }
  return this;
}