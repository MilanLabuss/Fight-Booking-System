#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;


class Person
{
public:
    void getCustomerDetails();

protected:
    string firstName;
    string surName;
    string Address1;
    string Address2;
    string Address3;


};

#endif // PERSON_H
