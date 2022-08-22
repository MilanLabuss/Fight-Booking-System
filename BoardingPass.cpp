#include "BoardingPass.h"
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;



void BoardingPass::getFlightDetails()
{

// Now comes the seating class selection
    cout << "\nPlease select which class you would like to be seated in: \n";
    cout << " 1: First Class \n" << " 2: Business \n" << " 3: Premium Economy\n" << " 4: Economy";
    cin >> classChoice;
    switch (classChoice)
    {
    case 1:
        flightClass = "First Class";
        cout << "You have selected First Class" << "\n";
        break;

    case 2:
        flightClass = "Business Class";
        cout << "You have selected Business Class" << "\n";
        break;

    case 3:
        flightClass = "Premium Economy";
        cout << "You have selected Premium Economy Class" << "\n";
        break;

    case 4:
        flightClass = "Economy";
        cout << "You have selected Economy Class" << "\n";
        break;

    default:
        cout << "Error please enter one of the options above \n";
    }
//details for the first leg

    cout << "Please enter which airport you wish to depart from for the first leg using the airports 3 digit code:  \n";
    cin >> firstAirport;
    cout << "Please enter which airport you wish to travel to in the first leg using the airports 3 digit code:  \n";
    cin >> secondAirport;

//promt the user to enter the first leg departure date in the correct format
    cout << "Please Enter your first leg Departure Date in the format DD/mm/YYYY: ";
    cin >> firstDepartureDay; // read the day
    if ( cin.get() != '/' ) // make sure there is a slash between DD and MM
    {
        cout <<  "Error please use the exact format DD/mm/YYYY\n";

    }
    cin >> firstDepartureMonth; // read the month
    if ( cin.get() != '/' ) // make sure there is a slash between MM and YYYY
    {
        cout << "Error please use the exact format DD/mm/YYYY\n";

    }
    cin >> firstDepartureYear; // read the year
    cout << "chosen deparutre date: " << firstDepartureDay << "/" << firstDepartureMonth << "/" << firstDepartureYear << "\n";

//prompt the user to enter the arrival date for the first leg in the correct format
    cout << "Please Enter your first Arrival Date for the first leg in the format DD/mm/YYYY: ";
    cin >> firstArrivalDay;

    if ( cin.get() != '/' ) // make sure there is a slash between DD and MM
    {
        cout <<  "Error please use the exact format DD/mm/YYYY \n";
    }
    cin >> firstArrivalMonth;

    if ( cin.get() != '/' )
    {
        cout << "Error please use the exact format DD/mm/YYYY\n";
    }
    cin >> firstArrivalYear; // read the year
    cout << "chosen arrival date: " << firstArrivalDay << "/" << firstArrivalMonth << "/" << firstArrivalYear << "\n";


//Now we will get the user to enter their departure time
    cout << "Enter the first leg Departure Hour (24h format):  " << "\n";
    cin >> firstDepartureHour;
    if(firstDepartureHour>23)
    {
        cout << "wrong input please enter an hour in the 24h format";

    }
    else
    {
        cout << "You have Entered: " << firstDepartureHour << "\n";
    }

    cout << "Enter the first leg Departure Minute (24h format):  " << "\n";
    cin >> firstDepartureMinute;
    if(firstDepartureMinute>59)
    {
        cout << "wrong input please enter an hour in the 24h format";

    }
    else
    {
        cout << "You have Entered: " << firstDepartureMinute << "\n";
    }

//Now we will get the user to enter their firstArrival time
    cout << "Enter the first leg Arrival Hour (24h format):  " << "\n";
    cin >> firstArrivalHour;
    if(firstArrivalHour>23)
    {
        cout << "wrong input please enter an hour in the 24h format";

    }
    else
    {
        cout << "You have Entered: " << firstArrivalHour << "\n";
    }

    cout << "Enter the first leg Arrival Minute (24h format):  " << "\n";
    cin >> firstArrivalMinute;
    if(firstArrivalMinute>59)
    {
        cout << "wrong input please enter an hour in the 24h format";

    }
    else
    {
        cout << "You have Entered: " << firstArrivalMinute << "\n";
    }
    cout << "Please Enter the Cost of the first leg:   ";
    cin >> cost1;

//now for the second leg details
//Now to get which airport they want to depart from for the first leg of the journey

    cout << "Enter the final destination airport using the 3 digit code";
    cin >> thirdAirport;

//promt the user to enter the second leg departure date in the correct format
    cout << "Please Enter the second leg Depature Date in the format DD/mm/YYYY: ";
    cin >> secondDepartureDay; // read the day
    if ( cin.get() != '/' ) // make sure there is a slash between DD and MM
    {
        cout <<  "Error please use the exact format DD/mm/YYYY\n";

    }
    cin >> secondDepartureMonth; // read the month
    if ( cin.get() != '/' ) // make sure there is a slash between MM and YYYY
    {
        cout << "Error please use the exact format DD/mm/YYYY\n";

    }
    cin >> secondDepartureYear; // read the year
    cout << "chosen deparutre date: " << secondDepartureDay << "/" << secondDepartureMonth << "/" << secondDepartureYear << "\n";


//prompt the user to enter the arrival date for the second leg in the correct format
    cout << "Please Enter the second Arrival Date for the second leg in the format DD/mm/YYYY: ";
    cin >> secondArrivalDay;

    if ( cin.get() != '/' ) // make sure there is a slash between DD and MM
    {
        cout <<  "Error please use the exact format DD/mm/YYYY \n";
    }
    cin >> secondArrivalMonth;

    if ( cin.get() != '/' )
    {
        cout << "Error please use the exact format DD/mm/YYYY\n";
    }
    cin >> secondArrivalYear; // read the year
    cout << "chosen arrival date: " << secondArrivalDay << "/" << secondArrivalMonth << "/" << secondArrivalYear << "\n";


//Now we will get the user to enter their second departure time
    cout << "Enter the Second leg Departure Hour (24h format):  " << "\n";
    cin >> secondDepartureHour;
    if(secondDepartureHour>23)
    {
        cout << "wrong input please enter an hour in the 24h format";

    }
    else
    {
        cout << "You have Entered: " << secondDepartureHour << "\n";
    }

    cout << "Enter the second leg Departure Minute (24h format):  " << "\n";
    cin >> secondDepartureMinute;
    if(secondDepartureMinute>59)
    {
        cout << "wrong input please enter an hour in the 24h format";

    }
    else
    {
        cout << "You have Entered: " << secondDepartureMinute << "\n";
    }

//Now we will get the user to enter their second Arrival time
    cout << "Enter the second leg Arrival Hour (24h format):  " << "\n";
    cin >> secondArrivalHour;
    if(secondArrivalHour>23)
    {
        cout << "wrong input please enter an hour in the 24h format";

    }
    else
    {
        cout << "You have Entered: " << secondArrivalHour << "\n";
    }

    cout << "Enter the first leg Arrival Minute (24h format):  " << "\n";
    cin >> secondArrivalMinute;
    if(secondArrivalMinute>59)
    {
        cout << "wrong input please enter an hour in the 24h format";

    }
    else
    {
        cout << "You have Entered: " << secondArrivalMinute << "\n";
    }
    cout << "Please Enter the Cost of the second leg: ";
    cin >> cost2;
    totalCost=cost1+cost2;


}


void BoardingPass::calcFlightTime()
{

    //Calculating the first leg flight time
    //converting the first the times to minutes
    firstDepartureTime = (firstDepartureHour*60) + firstDepartureMinute;
    firstArrivalTime = (firstArrivalHour*60) + firstArrivalMinute;
    //if the first day,month or year  is different to the second day i will find the difference to midnight
    if(firstDepartureDay<firstArrivalDay  || firstDepartureMonth<firstArrivalMonth || firstDepartureYear<firstArrivalYear)
    {
        firstDepartureTime = (firstDepartureHour*60) + firstDepartureMinute;
        firstArrivalTime = (firstArrivalHour*60) + firstArrivalMinute;
        firstDifferenceToMidnight = (24*60) - firstDepartureTime;
        firstLegFlightTime= firstDifferenceToMidnight  + firstArrivalTime;
        firstLegFlightHours = firstLegFlightTime/60;
        firstLegFlightMinutes = firstLegFlightTime%60;
        cout << "First Leg Travel time is: " << firstLegFlightHours << "Hrs" << "  " << firstLegFlightMinutes << "Mins" << "\n";
    }
    //if the flight is on the same day we dont need to find the difference to midnight
    else
    {
        firstDepartureTime = (firstDepartureHour*60) + firstDepartureMinute;
        firstArrivalTime = (firstArrivalHour*60) + firstArrivalMinute;
        firstLegFlightTime = firstArrivalTime-firstDepartureTime;
        firstLegFlightHours = firstLegFlightTime/60;
        firstLegFlightMinutes = firstLegFlightTime%60;
        cout << "First Leg Travel time is: " << firstLegFlightHours << "Hrs" << "  " << firstLegFlightMinutes << "Mins" << "\n";
    }

    firstDepartureTime = (firstDepartureHour*60) + firstDepartureMinute;
    firstArrivalTime = (firstArrivalHour*60) + firstArrivalMinute;

    //now to do the same for the second leg of the joruney
    //Calculating the first leg flight time
    //converting the first the times to minutes
    secondDepartureTime = (secondDepartureHour*60) + secondDepartureMinute;
    secondArrivalTime = (secondArrivalHour*60) + secondArrivalMinute;
    //if the first day,month or year is different to the second day i will find the difference to midnight
    if(secondDepartureDay<secondArrivalDay || secondDepartureMonth<secondArrivalMonth || secondDepartureYear<secondArrivalYear)
    {
        secondDepartureTime = (secondDepartureHour*60) + secondDepartureMinute;
        secondArrivalTime = (secondArrivalHour*60) + secondArrivalMinute;
        secondDifferenceToMidnight = (24*60) - secondDepartureTime;
        secondLegFlightTime= secondDifferenceToMidnight  + secondArrivalTime;
        secondLegFlightHours = secondLegFlightTime/60;
        secondLegFlightMinutes = secondLegFlightTime%60;
        cout << "Second Leg Travel time is: " << secondLegFlightHours << "Hrs" << "  " << secondLegFlightMinutes << "Mins" << "\n";
    }
    //if the flight is on the same day we dont need to find the difference to midnight
    else
    {
        secondDepartureTime = (secondDepartureHour*60) + secondDepartureMinute;
        secondArrivalTime = (secondArrivalHour*60) + secondArrivalMinute;
        secondLegFlightTime = secondArrivalTime-secondDepartureTime;
        secondLegFlightHours = secondLegFlightTime/60;
        secondLegFlightMinutes = secondLegFlightTime%60;
        cout << "Second Leg Travel time is: " << secondLegFlightHours << "Hrs" << "  " << secondLegFlightMinutes << "Mins" << "\n";
    }

//now to calculate total flight time
    totalFlightMinutes= firstLegFlightMinutes + secondLegFlightMinutes;
    totalFlightHours = firstLegFlightHours + secondLegFlightHours + (totalFlightMinutes/60);
    totalFlightMinutes = totalFlightMinutes%60;




    cout << "The Total Flight time is: " << totalFlightHours << " Hrs" << "  "  <<totalFlightMinutes << "mins" << "\n\n\n";

}

void BoardingPass::printBoardingPass()
{
    cout << "   BOARDING PASS: " << firstName << " " << surName << "    " << "     \tCLASS: " << flightClass << "    \t\t" << "\tCOST: " << cost1 << "   \n\n";
    cout << "   FROM" << "\t\t\t\t     DATE" << "\t\t\t         Time    \n";
    cout << "   " << firstAirport << "\t\t\t\t     " << firstDepartureDay << "." << firstDepartureMonth << "." << firstDepartureYear << "\t\t\t         " << firstDepartureHour << ":" << firstDepartureMinute << "\t\n\n";
    cout << "   TO" << "\n";
    cout << "   " << secondAirport << "\t\t\t\t     " << firstArrivalDay << "." << firstArrivalMonth << "." << firstArrivalYear << "\t\t\t         " << firstArrivalHour << ":" << firstArrivalMinute << "\t\n\n";
    cout << "   " << "EXPECTED FLIGHT TIME: " << firstLegFlightHours << "H " << firstLegFlightMinutes << "M" << "\n\n\n";
    totalFlights++;


    cout << "   BOARDING PASS: " << firstName << " " << surName << "    \t" << "         CLASS: " << flightClass << "    \t\t" << "\tCOST: " << cost2 << "   \n\n";
    cout << "   FROM" << "\t\t\t\t     DATE" << "\t\t                 Time    \n";
    cout << "   " << secondAirport << "\t\t\t\t     " << secondDepartureDay << "." << secondDepartureMonth << "." << secondDepartureYear << "\t\t\t         " << secondDepartureHour << ":" << secondDepartureMinute << "\t\n\n";
    cout << "   TO" << "\n";
    cout << "   " << thirdAirport << "\t\t\t\t     " << secondArrivalDay << "." << secondArrivalMonth << "." << secondArrivalYear << "\t\t\t         " << secondArrivalHour << ":" << secondArrivalMinute << "\t\n\n";
    cout << "   " << "EXPECTED FLIGHT TIME: " << secondLegFlightHours << "H " << secondLegFlightMinutes << "M" << "\n\n\n\n\n";
    totalFlights++;


}

void BoardingPass::printSummaryLetter()
{
//printing the summary letter
    cout << "   LDF TRAVEL\n\n";
    cout << "   Name:   \t\t" << firstName << " " << surName << "\n";
    cout << "   Address:\t\t" << Address1 << "\n";
    cout << "\t\t\t" << Address2 << "\n";
    cout << "\t\t\t" << Address3 << "\n\n";
    cout << "   REF:    \t\t" << firstAirport << " / " << thirdAirport << " / " << secondArrivalDay << "/" << secondArrivalMonth << "/" << secondArrivalYear << "\n\n\n";
    cout << "   DEAR " << firstName << "\n\n";
    cout << "   Please find enclosed your boarding passes for your flight from " << firstAirport << " to " << thirdAirport << " " << "\n\n";
    cout << "   Your journey is as follows: \n\n\n\n";

    cout << "   BOARDING PASS: " << firstName << " " << surName << "    " << " \t CLASS: " << flightClass << "   \t" << "\t\tCOST: " << totalCost << "   \n\n";
    cout << "   FROM" << "\t\t\t\t     DATE" << "\t\t                Time    \n";
    cout << "   " << firstAirport << "\t\t\t\t     " << firstDepartureDay << "." << firstDepartureMonth << "." << firstDepartureYear << "\t\t\t        " << firstDepartureHour << ":" << firstDepartureMinute << "\t\n\n";
    cout << "   TO" << "\n";
    cout << "   " << thirdAirport << "\t\t\t\t     " << secondArrivalDay << "." << secondArrivalMonth << "." << secondArrivalYear << "\t\t\t        " << secondArrivalHour << ":" << secondArrivalMinute << "\t\n\n";
    cout << "   " << "EXPECTED FLIGHT TIME: " << totalFlightHours << "H " << totalFlightMinutes << "M" << "\n\n\n\n";

    cout << "   Thank you for booking with LDF and we look forward to doing business with you again." << "\n\n";
    cout << "   queries@idf.ie \t www.lef.ie \t 021-123456 \t www.facebook.com/idf" << "\n\n\n\n\n";

}
void BoardingPass::generateReport()
{
    //generating report
    cout << "   Report: \n\n\n";
    cout << "   Total Flights = " << totalFlights << "\n";
    cout << "   Total cost = " << totalCost << "\n";
    cout << "   Commission = " << totalCost/10 << "\n\n\n";


}















