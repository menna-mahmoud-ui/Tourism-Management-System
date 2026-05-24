#ifndef TOURISMAGENCY_H
#define TOURISMAGENCY_H

#include <vector>
#include"client.h"
#include"TourPackage.h"
#include"Booking.h"
#include <string>
using namespace std;
class TourismAgency :public Booking 
{
private:
	vector<Client> clients;
	vector<TourPackage> packages;
	vector<Booking> bookings;
	Booking booking;

public:
	TourismAgency();
	void insertClients();
	void insertPackages();
	
	void insertBookings();
	void displayAllClients() ;
	void displayAllPackages() ;
	
	void displayAllBookings() ;
	void searchBookingByID() ;
	void deleteBookingByID();
};
#endif

