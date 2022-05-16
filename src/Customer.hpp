#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <iostream>
#include <vector>

using std::string;
using std::vector;

class Customer {
 private:
  string id, username, password;
  vector<string> emails, contactNos, locations;

 public:
  Customer(string _username, string _password);
  string getId();
  bool isUsernameEqual(string);
  bool isPasswordEqual(string);
  Customer* changeUsername(string);
  Customer* changePassword(string oldPassword, string newPassword);
  Customer* addEmail(string);
  Customer* removeEmail(string);
  Customer* addContactNo(string);
  Customer* removeContactNo(string);
  Customer* addLocation(string);
  Customer* removeLocation(string);
};

#endif