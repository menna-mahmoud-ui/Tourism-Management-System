#include <iostream>
#include "Client.h"
#include "TourPackage.h"

#include "Booking.h"
#include "TourismAgency.h"
#include <string>
using namespace std;

int main() {
Client c;
c.insertClient();
if(c.attempts==0)
	return 0 ;
TourPackage t;
t.insertPackage();
Booking b;
b.insertBooking();
TourismAgency ob;
ob.searchBookingByID();
ob.displayAllClients();

ob.displayAllPackages();
ob.displayAllBookings();
cout<<"            **** Have a nice time ****    "<<endl;
ob.deleteBookingByID();
	return 0;
}
