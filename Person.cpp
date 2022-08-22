#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

void Person::getCustomerDetails()
{
    cout << "please enter your customers name: ";
    cin >> firstName;
    cout << "please enter the customers surname: ";
    cin >> surName;
    cout << "You have Entered the name: " << firstName << " " << surName << endl;
    cout << "Please Enter Address Line 1: ";
    cin >> Address1;
    cout << "Please Enter Address Line 2: " ;
    cin >> Address2;
    cout << "Please Enter Address Line 3: " ;
    cin >> Address3;
}
