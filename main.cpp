#include "BoardingPass.h"
#include "Person.h"
#include <iostream>


using namespace std;


int main()
{
    char again = 'Y';

    while (again == 'y' || again == 'Y') //while loop to run program again
    {
        Person person;
        BoardingPass ticketOne,ticketTwo;
        person.getCustomerDetails();
        ticketOne.getFlightDetails();
        ticketOne.calcFlightTime();
        ticketOne.printBoardingPass();
        ticketOne.printSummaryLetter();
        ticketOne.generateReport();
        cout << "Would you like to run again? (y/n):";
        cin >> again;//change control variable
    } //end while loop
    cout << "The end." << endl;
    return 0;
}




