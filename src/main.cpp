#include <iostream>
#include "Customer.hpp"
#include "Order.hpp"
#include "Status.hpp"
#include "Staff.hpp"
#include "CustomerList.hpp"

using namespace std;

int main(int argc, char** argv) {
  //Create new customers
  Customer* methmal = new Customer("methmal", "943hfg9HFIK94HW2");
  methmal
    ->addEmail("methmal48y8@gmail.com")
    ->addEmail("methmal768@yahoo.com")
    ->addContactNo("0772312345")
    ->addContactNo("0761234322")
    ->addLocation("Ragama, Jaela");

  Customer* namal = new Customer("namal", "dfjkl546dsf");
  namal
    ->addEmail("Kkamal@gmail.com")
    ->addContactNo("0776123445")
    ->addContactNo("0712354667")
    ->addLocation("Gampaha, Ganemulla")
    ->addLocation("Hapugoda, Kandana");

  CustomerList* list;
  list->push(methmal)->push(namal);


  //edit customer profile
  Customer* loggedCustomer = list->login("methmal", "943hfg9HFIK94HW");
  loggedCustomer
    ->removeEmail("methmal48y8@gmail.com")
    ->removeContactNo("0772312345")
    ->addContactNo("0741234329")
    ->changePassword("943hfg9HFIK94HW", "8rhf898939gHFU");


  //create staff members
  Staff* s1 = new Staff();
  s1->setName("Amara");
  s1->setJob("Driver");

  Staff* s2 = new Staff();
  s2->setName("Kamala");
  s2->setJob("Cleaner");


  //namal place an order
  loggedCustomer = list->login("namal", "dfjkl546ds");

  Order* o1 = new Order('d', 3.58);
  o1->displayOrderDetails();
  o1->assignStaff(s1);
  o1->placedBy(loggedCustomer);

  //update order status
  Status* st1 = new Status("Picked");
  st1->assignOrder(o1);
  st1->assignStaff(s1);


  //methmal place an order
  loggedCustomer = list->login("methmal", "9rhf898939gHFU");

  Order* o2 = new Order('l', 9.54);
  o2->displayOrderDetails();
  o2->assignStaff(s2);
  o2->placedBy(loggedCustomer);

  //update order status
  Status st2("Packed");
  st2.assignOrder(o2);
  st2.assignStaff(s2);


  //clean memory
  delete s1, s2;
  delete o1, o2;
  delete st1, st2;
  delete methmal, namal;
  delete list;
}
