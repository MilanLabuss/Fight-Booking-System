#ifndef BOARDINGPASS_H
#define BOARDINGPASS_H
#include "Person.h"
#include <string>

using namespace std;


class BoardingPass:public Person
{
public:
    void getFlightDetails();
    void calcFlightTime();
    void printBoardingPass();
    void printSummaryLetter();
    void generateReport();

private:
    int classChoice;
    string flightClass;
    //calculating cost using a multiplier
    float cost1;
    float cost2;
    float totalCost;
    int totalFlights;
    //first leg of the journey
    int firstDepartureDay;
    int firstDepartureMonth;
    int firstDepartureYear;
    int firstArrivalDay;
    int firstArrivalMonth;
    int firstArrivalYear;
    string firstAirport;
    string secondAirport;
    int firstDepartureHour;
    int firstDepartureMinute;
    int firstArrivalHour;
    int firstArrivalMinute;

    //second leg of the journeyint firstDepartureDay;
    int secondDepartureDay;
    int secondDepartureMonth;
    int secondDepartureYear;
    int secondArrivalDay;
    int secondArrivalMonth;
    int secondArrivalYear;
    int secondDepartureHour;
    int secondDepartureMinute;
    string thirdAirport;
    int secondArrivalHour;
    int secondArrivalMinute;

    //Flight Time for the first flight
    int firstDepartureTime;
    int firstArrivalTime;
    int firstDifferenceToMidnight;
    int firstLegFlightTime;
    int firstLegFlightHours;
    int firstLegFlightMinutes;

    //Flight Time for the second flight
    int secondDepartureTime;
    int secondArrivalTime;
    int secondDifferenceToMidnight;
    int secondLegFlightTime;
    int secondLegFlightHours;
    int secondLegFlightMinutes;

    //Total Flight Time
    int totalFlightHours;
    int totalFlightMinutes;


};

#endif // BOARDINGPASS_H
